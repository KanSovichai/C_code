#include <stdio.h>
int main()
{
    int num[] = {2, 4, 3, 1};
    int temp,size=sizeof(num)/sizeof(num[0]);
    // sort
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (num[i] > num[i + 1])
            {
                temp = num[i + 1];
                num[i + 1] = num[i];
                num[i] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", num[i]);
    }
    //Linear search means that we iterate through the whole array to find a specific value
    int search;
    printf("\nEnter the number to search: ");
    scanf("%d", &search);
    for(int i=0; i<size;i++){
        if(num[i] == search){
            printf("The location of the number is in the index %d",i);
            break;
        }
    }
    return 1;
}