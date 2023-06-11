#include <stdio.h>


int main()
{
    int rows;
    printf("\nEnter number of rows: ");
    scanf("%i", &rows);

    int ending = 1, x = 1;

    // while (rows){
    for (;rows > 0 ; rows -= 2){
        for (int i = 9; i >= ending ; i--){
            printf("%d", i);
            
            if(i == ending)
            {
                ending++;
                printf("\n");
                for(int j = 9; j >= ending; j--)
                    printf("%d",x);
                printf("\n");
                x+=2;
                ending++;
            }
        }
        // rows -= 2;
    }


    return 0;
}
