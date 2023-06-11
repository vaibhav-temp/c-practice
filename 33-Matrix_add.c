#include <stdio.h>

#define MAX_SIZE 100
#define getName(var) #var


void Matrix_Add(int n, int a[MAX_SIZE][MAX_SIZE], int b[MAX_SIZE][MAX_SIZE], int sum[MAX_SIZE][MAX_SIZE]){
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			sum[i][j] = a[i][j] + b[i][j];
		}
}


void Input_Mat(int size, int mat[MAX_SIZE][MAX_SIZE]){
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++) {
				scanf("%d", &mat[i][j]);
	}
}


void Print_Mat(int size, int mat[MAX_SIZE][MAX_SIZE]){
	for (int i = 0; i < size; ++i)
		for (int j = 0; j < size; ++j) {
			printf("%d\t", mat[i][j]);
			if (j == size - 1) 
				printf("\n");
		}
}


int main(){

	int size, a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], sum[MAX_SIZE][MAX_SIZE];

	printf("\nEnter Order of Matrix(between 1 and %d): ", MAX_SIZE);
  	scanf("%d", &size);


	printf("\nEnter elements of 1st matrix:\n");
	Input_Mat(size, a);

	printf("\nEnter elements of 2nd matrix:\n");
	Input_Mat(size, b);



	Matrix_Add(size, a, b, sum);


	printf("\nSum of two matrices: \n");
	Print_Mat(size, sum);

  	return 0;


}