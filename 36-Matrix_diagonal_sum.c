#include <stdio.h>


int Matrix_Diagonal_Sum(int n, int a[100][100]){
	int sum=0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (i == j || i + j == n - 1){
				printf("%d ", a[i][j]);
				sum += a[i][j];
			}
    	}
	return sum;
}


void Input_Mat(int size, int mat[100][100]){
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++) {
				scanf("%d", &mat[i][j]);
	}
}


void Print_Mat(int size, int mat[100][100]){
	for (int i = 0; i < size; ++i)
		for (int j = 0; j < size; ++j) {
			printf("%d\t", mat[i][j]);
			if (j == size - 1) 
				printf("\n");
		}
}


int main(){

	int size, a[100][100], sum = 0;

	printf("\nEnter Order of Matrix(between 1 and 100): ");
  	scanf("%d", &size);


	printf("\nEnter elements of matrix:\n");
	Input_Mat(size, a);

	printf("\nMatrix entered is: \n");
	Print_Mat(size, a);

	printf("\nDiagonals of Matrix are:\n");
	sum = Matrix_Diagonal_Sum(size, a);

	printf("\n\nSum of Diagonals of Matrix = %d.\n", sum);

  	return 0;


}