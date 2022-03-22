#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int rando = rand() % arr[high];//randonum(arr[high]);
    swap(&arr[rando], &arr[high]);
    
    int pivot = arr[high]; //randonum(arr[high]); // pivot
    int e = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
    int placeholder;
    
    for (int g = low; g <= high - 1; g++)
    {
        // If current element is smaller than the pivot
        if (arr[g] < pivot)
        {
            e++; // increment index of smaller element
            // placeholder = 
            swap(&arr[e], &arr[g]);
        }
    }
    swap(&arr[e + 1], &arr[high]);
  return (e + 1);
}


void insertionsort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      j = j-1;
    }
    array[j + 1] = key;
  }
}

/* low  --> Starting index,  high  --> Ending index */
int quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int part = partition(arr, low, high);
        quicksort(arr, low, part - 1);  // Before pi
        quicksort(arr, part + 1, high); // After pi
    }
}

int choosesort(int arr[], int low, int high)
{
    int size = high+1;
    if(size<=8){
        insertionsort(arr, size);
    }
    else{
        quicksort(arr, low, high);
    }
    
}

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