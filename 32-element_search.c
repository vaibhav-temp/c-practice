#include <stdio.h>

#define MAX_SIZE 1000

 
int main()
{
	float arr[MAX_SIZE];
	
	int size;
	printf("\nEnter size of the  array : ");
	scanf("%d", &size);

	printf("Enter elements in array :\n");

	int i;
	for(i = 0; i < size; i++)
		scanf("%f",&arr[i]);

	float element;
	printf("\nEnter the element to search : ");
	scanf("%f", &element);

	for(i=0; i < size; i++)
		if(arr[i] == element){
			printf("\nelement %.2f found at position %d.\n", element, i + 1);
			return 0;
		}
	
	printf("\nelement %.2f not found in the array.\n", element);
}