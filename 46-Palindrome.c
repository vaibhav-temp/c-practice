#include <stdio.h>
#include <string.h>


void IsPalindrome(char str[]){
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    printf("%s is a palindrome\n", str);
}



int main(){


    printf("\nEnter a String to Check if it Palindrome or not: ");
    char* str[1000];
    gets(str);


    IsPalindrome(str);
    return 0;


}