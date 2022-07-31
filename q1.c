// Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user
#include<stdio.h>
int main()
{
    int n[10],i,sum=0;
    printf("Enter 10 numbers: ");
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    
   for(i=0;i<10;i++)
   {
    sum=sum+n[i];
   }  
     printf(" Sum=%d",sum);
}