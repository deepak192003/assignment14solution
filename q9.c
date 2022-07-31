// Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
#include<stdio.h>
int main()
{
    int n,arr[20],i,j,temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    printf("After reverse of array: ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}