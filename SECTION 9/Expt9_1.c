/*: Write a program using pointers to input a 4X5 matrix and then display it*/
#include "stdio.h"
int main()
{
    int A[4][5];
    printf("Enter the all elements of 4x5 matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", *(A + i) + j);
        }
    }
    printf("The Matrix is:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%-6d", *(*(A + i) + j));
        }
        printf("\n");
    }
    return 0;
}