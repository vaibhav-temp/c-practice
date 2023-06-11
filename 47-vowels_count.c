#include <stdio.h>



int main(){
    
    int count = 0, vowels = 0;
    char str[100], c;
    
    printf("\nEnter a string in which you want to find number of vowels: ");
    scanf("%[^\n]", str);
    
    
    while(str[count] != '\0') 
    {
        c = str[count];
        if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
            vowels++;
        }
        count++;
    }
    printf("\nNumber Of Vowels In The Given String Are: %d \n", vowels);
    
    return 0;
}