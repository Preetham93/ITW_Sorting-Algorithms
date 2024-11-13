#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int N) {

    
    for (int i = 1; i < N; i++) {
        int key = arr[i];
        int j = i - 1;

        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        
        
    }
}