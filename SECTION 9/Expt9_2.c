/*Write a program using pointers to read an array of integers and print its elements in
reverse order.*/
#include "stdio.h"
int main()
{
    int A[20], size; // j,temp;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    printf("Enter %d elements in the array:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", A + i);
    // sorting
    /*for(i=0,j=size-1;i<size/2;i++,j--){
         temp=*(A+i);
         *(A+i)=*(A+j);
         *(A+j)=temp;

     }*/
    printf("The array in reverse order is\n");
    for (int i = size - 1; i >= 0; i--)
        printf("%d, ", *(A + i));
    return 0;
}