// Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
#include<stdio.h>
int main()
{
    int n[10],i,sum=0;
    float avg;
    printf("Enter elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+n[i];
    }
    avg=sum/10;
    printf("%f",avg);
}