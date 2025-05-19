#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    printf("Original string: %s\n",str);
    for(int i=0; i<strlen(str); i++){
            str[i] = toupper(str[i]);
    }
    printf("Capitalized string: %s\n",str);

    return 0;
}