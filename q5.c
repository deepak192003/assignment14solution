// Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.
#include<stdio.h>
int main()
{
    int n[10],i,min;
    printf("Enter 10 elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    min=n[0];
    for ( i = 0; i < 10; i++)
    {
      if(min>n[i])
        {
            min=n[i];
        }  
    }
    printf("Smallest number is %d",min);
}