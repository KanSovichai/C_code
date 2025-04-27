#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    char str2[20];
    int i;
    printf("Enter a string: ");
    scanf("%s", str1);
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i]; // copy each character from str1 to str2
    }
    str2[i] = '\0'; // null-terminate str2
    str2[0] = 'A';  // change the first character to 'A'
    str2[1] = 'B';  // change the second character to 'B'
    printf("Modified string: %s\n", str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i]; // reset the str2 to the original str1
       
    }
    for (int i = 1; str2[i] != '\0'; i++)
    {
        if (i % 2 == 1)
        {
            str2[i - 1] = 'Z'; // change the odd character to 'Z'
        }
    }
    printf("Modified string: %s\n", str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    
    }
    for (i = 1; str2[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            str2[i - 1] = 'X'; // change the even character to 'X'
        } 
    }
    printf("Modified string: %s\n", str2);
    return 0;
}