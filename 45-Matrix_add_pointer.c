#include <stdio.h>


void Matrix_Add(int n, int a[100][100], int b[100][100], int sum[100][100]){
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			*(*(sum + i) + j) = *(*(a + i) + j) + *(*(b + i) + j); 
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

	int size, a[100][100], b[100][100], sum[100][100];

	printf("\nEnter Order of Matrix(between 1 and %d): ", 100);
  	scanf("%d", &size);


	printf("\nEnter elements of 1st matrix:\n");
	Input_Mat(size, a);

	printf("\nEnter elements of 2nd matrix:\n");
	Input_Mat(size, b);



	Matrix_Add(size, a, b, sum);


	printf("\nSum of two matrices using Pointer: \n");
	Print_Mat(size, sum);

  	return 0;


}







// int main(){

// 	int mat[3][3] = {
// 		{11, 12, 13},
// 		{21, 22, 25},
// 		{31, 32, 33}
// 	};


// 	printf("%d \n", mat[1][2]);
// 	printf("%d \n", *(*(mat + 1) + 2));
// 	printf("%d \n", *mat[1] + 2);

// 	// Does not *(mat + 2) point to 21 ? so how does 
// }