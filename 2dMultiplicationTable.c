#include<stdio.h>
int main(){
    // Declare a 2D array to store the multiplication table
    int table[2][10];
    // Loop through each row and column
    for(int i=0;i<2;i++){
        for(int j=0;j<10;j++){
            table[i][j] = j+1;
        }
    }
    // Print the multiplication table
    printf("Multiplication Table:\n");
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%d x %d = %d\n",table[0][i],table[1][j],table[0][j]*table[1][i]);
        }
        printf("\n");
    }
    return 0;
}
