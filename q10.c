// Write a program in C to copy the elements of one array into another array.Take array
// values from the user
#include<stdio.h>
int main()
{
    int arr[10],n,i,j,array[10];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
        array[j]=arr[i];
    }
    }
    printf("Copy the elements of one array into another");
    for(j=0;j<n;j++)
    {
        printf("%d\n",arr[j]);
    }
}