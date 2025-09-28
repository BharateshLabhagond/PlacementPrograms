//rotate array (here i'm done right rotate)

#include<stdio.h>

void main()
{
    int size,k;
     printf("Enter size of the array: ");
     scanf("%d",&size);

     printf("Enter k shifts: ");
     scanf("%d",&k);
     
     int arr[size];
     printf("Enter elements into array: ");
     for(int i=0; i<size ; i++)
     {
        scanf("%d",&arr[i]);
     }
     
     for(int i=0 ; i<k ; i++)
     {
         int last = arr[size-1];
         for(int j=size-1 ; j>0 ; j--)
         {
             arr[j] = arr[j-1];
         }
         arr[0]=last;
     }
     
     /*
     //for left rotate
     for(int i=0 ; i<k ; i++)
     {
         int last = arr[0];
         for(int j=0 ; j<size-1 ; j++)
         {
             arr[j] = arr[j+1];
         }
         arr[size-1]=last;
     }
     */
     
     printf("array after %d rotation: ",k);
     for(int i=0; i<size ; i++)
     {
        printf("%d ",arr[i]);
     }
     
     
}