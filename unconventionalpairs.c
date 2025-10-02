#include<stdio.h>
#include<stdlib.h>

void sort_array(int array[], int size) {
    void quicksort(int arr[], int left, int right) {
        if (left >= right) return;

        int pivot = arr[(left + right) / 2];
        int i = left, j = right;

        while (i <= j) {
            while (arr[i] < pivot) i++;
            while (arr[j] > pivot) j--;

            if (i <= j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++; j--;
            }
        }

        if (left < j) quicksort(arr, left, j);
        if (i < right) quicksort(arr, i, right);
    }

    quicksort(array, 0, size - 1);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 1; i <= n; i++){
            scanf("%d", &arr[i - 1]);
        }

        sort_array(arr, n);

        int count = 0;
        int count1 = 0;
        for(int i = 0; i < n - 1; i += 2){
            count = abs(arr[i] - arr[i + 1]);
            if(count >= count1){
                count1 = count;
            }
        }
        printf("%d\n", count1);
    }
    return 0;
}
