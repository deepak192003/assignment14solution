// Write a program to sort elements of an array of size 10. Take array values from the
// user.
#include<stdio.h>
void main()
{
   
    int num[10],i,temp,j,n;
    printf("Enter the number of element in  array : ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
            scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
                  if(num[i]>=num[j])
                  {
                     temp=num[i];
                     num[i]=num[j];
                     num[j]=temp;
                  }     
        }
    }
   printf("In ascending order: ");
   for(i=0;i<n;i++)
   {
      printf("%d \n",num[i]);
   }
}
