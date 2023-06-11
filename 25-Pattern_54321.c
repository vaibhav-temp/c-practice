#include <stdio.h>


int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%i", &rows);

    for (int i = rows; i > 0; i--){
        for (int j = i - 1; j >= 0; j--){
            printf("%c ", j + '1');
        }
        printf("\n");
    }


    return 0;
}