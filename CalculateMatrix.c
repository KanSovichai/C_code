#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    // Declare a 2D array to store the matrix
    int matrix1[3][3],matrix2[3][3],result[3][3], i, j;
    // Initialize the matrix with random values
    srand(time(0));
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            matrix1[i][j] = rand() % 10; // Random values between 0 and 9 for matrix1
            matrix2[i][j] = rand() % 10; // Random values between 0 and 9 for matrix2
        }
    }
    //multiply the matrices
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            result[i][j] = 0; // Initialize the result matrix to 0 
            for(int k=0; k<3; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    // Print the matrices
    printf("Matrix 1:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("Result:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}