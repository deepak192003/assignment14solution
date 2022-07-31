// Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user
#include<stdio.h>
int main()
{
    int n[10],i,max;
    printf("Enter elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    max=n[0];
    for(i=1;i<10;i++)
    {
        if(max<n[i])
        {
            max=n[i];
        }
    }
    printf("Greatest number is %d",max);
}