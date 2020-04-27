function greedyChange(coinSet, change, res) {
  if (change <= 0) {
    return res;
  }
  for (let i = 0; i < coinSet.length; i++) {
    if (change - coinSet[i] >= 0) {
      return greedyChange(coinSet, change - coinSet[i], res.concat(coinSet[i]));
    }
  }
}

function greedyChangeMax(coinSet, change, res) {
  if (change <= 0) {
    return res;
  }
  let temps = [];
  for (let i = 0; i < coinSet.length; i++) {
    if (change - coinSet[i] >= 0) {
      temps.push(coinSet[i]);
    }
  }
  const max = Math.max(...temps);
  return greedyChangeMax(coinSet, change - max, res.concat(max));
}

function greedyChangeMaxSplice(coinSet, change, res) {
  if (change <= 0) {
    return res;
  }
  let temps = [];
  for (let i = 0; i < coinSet.length; i++) {
    if (change - coinSet[i] >= 0) {
      temps.push(coinSet[i]);
    }
  }
  if (temps.length) {
    const pos = coinSet.lastIndexOf(Math.max(...temps));
    const val = coinSet[pos];
    coinSet.splice(pos, pos);
    return greedyChangeMaxSplice(coinSet, change - val, res.concat(val));
  } else {
    return res;
  }
}

console.log(greedyChange([20, 15, 10, 5, 1], 27, []));
console.log(greedyChangeMax([15, 20, 5, 10, 1], 27, []));
console.log(greedyChangeMaxSplice([15, 20, 5, 10, 1], 27, []));
