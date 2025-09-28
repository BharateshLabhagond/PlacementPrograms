//k th largest/smallest element in an Array 

#include<stdio.h>

void main()
{
    int size,k;
     printf("Enter size of the array: ");
     scanf("%d",&size);
     printf("\nEnter k value: ");
     scanf("%d",&k);
     
     int arr[size];
     printf("Enter elements into array: ");
     for(int i=0; i<size ; i++)
     {
        scanf("%d",&arr[i]);
     }
     
     for(int i=0 ; i<(size-1) ; i++ )
     {
         for(int j=i+1 ; j<size ; j++)
         {
             if(arr[i]>arr[j])
             {
                 int temp = arr[i];
                 arr[i] = arr[j];
                 arr[j] = temp;
             }
         }
     }
     
     printf("\nSorted array: ");
     for(int i=0; i<size ; i++)
     {
        printf("%d ",arr[i]);
     }
     
     printf("\nthe %dth largest element is : %d",k,arr[size-k]);
     
     printf("\nthe %dth smallest element is : %d",k,arr[k-1]);
     
}



