#include <stdio.h>
void getMatrixValues(int matrix[3][3])
{
    printf("Enter values for the 3x3 matrix:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("Enter value for element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void displayMatrix(int matrix[3][3])
{
    printf("The 3x3 matrix is:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[3][3];
    getMatrixValues(matrix);
    displayMatrix(matrix);
    return 0;
}
