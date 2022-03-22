#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int randonum(int maxnum);
void swap(int* a, int* b);
int partition (int arr[], int low, int high);
void insertionsort(int array[], int size);
int quicksort(int arr[], int low, int high);
int choosesort(int arr[], int low, int high);


int main(){
    
    int thismany;

    printf("how many: ");
    scanf("%d", &thismany);
    int arr[thismany];
    printf("gimme em: ");
    for(int j = 0; j<thismany; j++){
        scanf("%d", &arr[j]);
    };
    
    int a = sizeof(arr)/sizeof(arr[0]);

    choosesort(arr, 0, a-1);

    for(int i = 0; i<thismany; i++){
        printf("%d \n", arr[i]);
    };

}