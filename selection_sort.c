#include <stdio.h>

void selectionSort(int arr[], int N) {

    
    for (int i = 0; i < N - 1; i++) {

        
        int min_idx = i;
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;

        
    }
}