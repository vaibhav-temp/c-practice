#include <stdio.h>


void Input_Mat(int size, int mat[100][100]){
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++) {
				scanf("%d", &mat[i][j]);
	}
}


void Print_Upper_triangular_Mat(int size, int mat[100][100]){
	for (int row = 0; row < size; row++)
		for (int col = 0; col < size; col++) {
			if (col < row)
				printf("%d\t", 0);
			else
				printf("%d\t", mat[row][col]);
			if (col == size - 1) 
				printf("\n");
		}
}


void Print_Mat(int size, int mat[100][100]){
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++) {
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

	printf("\nUpper Triangular Matrix of the given matrix is:\n");
	Print_Upper_triangular_Mat(size, a);

  	return 0;


}