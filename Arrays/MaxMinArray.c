//Maximum and Minimum Element in an array

#include<stdio.h>

void main()
{
    int size;
     printf("Enter size of the array: ");
     scanf("%d",&size);
     
     int arr[size];
     printf("Enter elements into array: ");
     for(int i=0; i<size ; i++)
     {
        scanf("%d",&arr[i]);
     }
     
     int max = arr[0];
     for(int i=1 ; i<size ; i++)
     {
         if(max<arr[i])
         {
             max=arr[i];
         }
     }
     
     int min = arr[0];
     for(int i=1 ; i<size ; i++)
     {
         if(min>arr[i])
         {
             min=arr[i];
         }
     }
     printf("\nthe Maximum element in array is: %d",max);
     printf("\nthe Minimum element in array is: %d",min);
     
}