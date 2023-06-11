#include <stdbool.h>
#include <stdio.h>



void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n){
    start:
    bool swapped = false;
    for (int i = 0; i < n; i++){
        if (arr[i] > arr[i + 1]){
            swap(&arr[i], &arr[i + 1]);
            swapped = true;
        }
    }
    n--;
    if (swapped) goto start;

}


void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}


int main()
{
	int arr[20];
	int n;

	printf("\nEnter no of element in Array: ");
	scanf("%i", &n);

	printf("\nEnter an Array to sort: \n");

	for (int i = 0; i < n; i++){
		scanf("%i", &arr[i]);
	}

	bubbleSort(arr, n);
	printf("\nSorted array: ");
	printArray(arr, n);
	printf("\n");

	return 0;
}
