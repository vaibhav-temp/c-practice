#include <stdio.h>


void Matrix_Mul(int n, int a[100][100], int b[100][100], int mul[100][100]){
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			int sum=0;
            for(int k = 0; k < n; k++)
                sum += a[i][k] * b[k][j];
            mul[i][j] = sum;
		}
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

	int size, a[100][100], b[100][100], mul[100][100];

	printf("\nEnter Order of Matrix(between 1 and 100): ");
  	scanf("%d", &size);


	printf("\nEnter elements of 1st matrix:\n");
	Input_Mat(size, a);

	printf("\nEnter elements of 2nd matrix:\n");
	Input_Mat(size, b);



	Matrix_Mul(size, a, b, mul);


	printf("\nMultiplication of two matrices: \n");
	Print_Mat(size, mul);

  	return 0;


}