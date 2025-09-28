//Remove Duplicate Elements

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
     
     for(int i=0 ; i<size ; i++)
     {
         for(int j=i+1 ; j<size ;j++)
         {
             if(arr[i]==arr[j])
             {
                 for(int k=j ; k<size ;k++)
                 {
                     arr[k] = arr[k+1];
                 }
                 size--;
                 j--;
             }
         }
     }
     
     printf("\nArray after removal of duplicate elements: ");
     for(int i=0; i<size ; i++)
     {
        printf("%d ",arr[i]);
     }
     
}