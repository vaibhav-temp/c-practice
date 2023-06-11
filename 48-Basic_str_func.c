#include <stdio.h>


int _StrLen(char str[]){
    int i;
    for (i = 0; str[i] != '\0'; ++i);
    return i;
}


void _StrCpy(char* src, char* dest){
    int i = 0;
    
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i]='\0';
}

char* _StrCat(char str1[], char str2[]){
    int i = 0, j = 0;
 
    char* str3 = (char*) malloc(100);

    while (str1[i] != '\0'){
        str3[j] = str1[i];
        i++; j++;
    }

    i = 0;

    while (str2[i] != '\0'){
        str3[j] = str2[i];
        i++; j++;
    }
 
    str3[j] = '\0';
 
    return str3;
}




int main(){
    
    char str1[100], str2[100];
    
    printf("\nEnter a Two string:\n");
    printf("String 1: ");
    gets(str1);

    printf("String 2: ");
    gets(str2);
    
    
    printf("\nLength of string 1 is : %d and Length of string 2 is : %d.\n", _StrLen(str1), _StrLen(str2));
    
    char copied_str[100];
    _StrCpy(str1, copied_str);
    printf("\nstring 1 : %s \nand copy of string 1 is : %s\n", str1, copied_str);


    char* concated_string = _StrCat(str1, str2);
    printf("\nConcatation of String1 and String2 :\n%s\n", concated_string); 
    free(concated_string);

    return 0;
}