// Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int n[10],i,sumeven=0,sumodd=0;
    printf("Enter elments: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        if(n[i]%2==0)
        {
            sumeven=sumeven+n[i];
        }
        else
        {
            sumodd=sumodd+n[i];
        }
    }
    printf("Sum of all even number is %d",sumeven);
    printf("Sum of all odd number is %d",sumodd);
}