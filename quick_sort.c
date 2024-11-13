#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {

    
    int p = arr[low];
    int i = low;
    int j = high;

    while (i < j) {


        while (arr[i] <= p && i <= high - 1) {
            i++;
        }

        
        while (arr[j] > p && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
    
}