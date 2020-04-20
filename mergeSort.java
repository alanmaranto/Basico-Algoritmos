public class MergeSort 
{ 

    // Driver method 
    public static void main(String args[]) 
    { 
         

        int arr[] = {3, 94, 86, 82, 90, 10, 87, 36, 61, 8, 17, 15, 22, 10, 23, 78,
            25, 2, 30, 45, 98, 43, 98, 59, 53, 57, 2, 64, 1, 41, 32, 58, 19, 99, 60,
            74, 48, 80, 44, 25, 68, 1, 89, 77, 60, 25, 99, 30, 76, 32, 57, 82, 52,
            44, 72, 87, 34, 87, 65, 30, 54, 6, 31, 33, 44, 44, 42, 82, 90, 17, 9,
            98, 28, 86, 69, 3, 17, 8, 45, 98, 12, 47, 95, 43, 72, 39, 41, 82, 74,
            56, 65, 79, 50, 26, 67, 100, 24, 67, 38, 57};
    
        System.out.println("Given Array"); 
        printArray(arr); 
    
        MergeSort ob = new MergeSort(); 
        ob.sort(arr, 0, arr.length-1); 
    
        System.out.println("\nSorted array"); 
        printArray(arr); 
    } 


    void sort(int arr[], int l, int r) 
    { 
        if (l < r) 
        { 
            int m = (l+r)/2; 
            sort(arr, l, m); 
            sort(arr , m+1, r); 
            merge(arr, l, m, r); 
        } 
    } 
  

    void merge(int arr[], int l, int m, int r) 
    { 
       
        int n1 = m - l + 1; 
        int n2 = r - m; 
  
        int L[] = new int [n1]; 
        int R[] = new int [n2]; 
  
        for (int i=0; i<n1; ++i) 
            L[i] = arr[l + i]; 
        for (int j=0; j<n2; ++j) 
            R[j] = arr[m + 1+ j]; 
  
        int i = 0, j = 0; 
  
        int k = l; 

        while (i < n1 && j < n2) 
        { 
            if (L[i] >= R[j]) 
            { 
                arr[k] = L[i]; 
                i++; 
            } 
            else
            { 
                arr[k] = R[j]; 
                j++; 
            } 
            k++; 
        } 
  
        while (i < n1) 
        { 
            arr[k] = L[i]; 
            i++; 
            k++; 
        } 

        while (j < n2) 
        { 
            arr[k] = R[j]; 
            j++; 
            k++; 
        } 
    } 
    
    static void printArray(int arr[]) 
    { 
        int n = arr.length; 
        for (int i=0; i<n; ++i) 
            System.out.print(arr[i] + " "); 
        System.out.println(); 
    } 
  
   
} 