#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        switch(ch){
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
        }
    }
    printf("Number of vowels in the string:\n %d A\n %d E\n %d I\n %d O\n %d U\n", a, e, i, o, u);
    printf("Total number of vowels: %d\n", a + e + i + o + u);

    return 0;
}