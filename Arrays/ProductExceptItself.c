//product of array except itself

#include<stdio.h>

void main()
{
    int size,prod=1;
     printf("Enter size of the array: ");
     scanf("%d",&size);

     int arr[size];
     printf("Enter elements into array: ");
     for(int i=0; i<size ; i++)
     {
        scanf("%d",&arr[i]);
     }
     
     printf("product of array except itself: ");
     for(int i=0 ; i<size ; i++)
     {
         int prod=1;
         for(int j=0 ; j<size ; j++)
         {
             if(i==j)
                continue;
             else
                prod*=arr[j];
         }
         printf("'%d' ",prod);
     }
}