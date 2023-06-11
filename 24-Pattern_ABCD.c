#include <stdio.h>


int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%i", &rows);

    for (int i = 1; i <= rows; i++){
        for (int j = 0; j < i; j++){
            printf("%c ", j + 'A');
        }
        printf("\n");
    }


    return 0;
}