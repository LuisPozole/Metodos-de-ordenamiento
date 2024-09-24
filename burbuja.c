#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}



int main(){
    int n = 30; 
    int arr[n];
    srand(time(0));

    
    for (int i = 0; i < n; i++){
        arr[i] = rand() % 100; 
    }
    printf("Arreglo desordenado:\n");
    for(int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }


    printf("\n");
    random(arr, n);
    printf("Arreglo ordenado:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}