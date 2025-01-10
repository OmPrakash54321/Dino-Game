#include<stdio.h>
#include<stdlib.h>

const int numRows = 2;
const int numColumns = 3;


void main() {

    int row = 0;
    int column = 0;
    double arrayElement = 0;
    double* arrayMatrix = malloc(numRows * numColumns * sizeof(double));

    printf("\nPlease enter the elements of your augmented matrix:\n");
    for(row = 0; row < numRows; row++)
    {
        for(column = 0; column < numColumns; column++)
        {
            printf("A[%d][%d]:", row + 1, column + 1);
            scanf("%lf", &arrayElement);
            printf("\n");

            *(arrayMatrix + row * numColumns + column) = arrayElement;
            //arrayMatrix[row + numColumns + column] = arrayElement;
        }
    }

    // TEST PRINT
    for(row = 0; row < numRows; row++)
    {
        for(column = 0; column < numColumns; column++)
        {
            printf("%0.3lf", *(arrayMatrix + row * numColumns + column));
            //printf("%5.2lf",  arrayMatrix[row + numColumns + column]);
        }
        printf("\n");
    }
}