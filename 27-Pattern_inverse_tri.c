#include<stdio.h>
int main()
{
    for(int i=0;i<=6;i++)
    {
        for(int k = 'A'; k <= 'F'-i; k++)
            printf("%czz",k);
        for(int j = 1; j < i*2; j++)
            printf(" ");
        for(int l = 'F'-i; l >= 'A'; l--)
            if(l != 'F')
                printf("%c",l);
        printf("\n");
    }
    return 0;
}