//Find Duplicates in an Array 

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
     printf("\nDuplicate elements in array: ");
     for(int i=0 ; i<size ; i++)
     {
         int count = 0;
         for(int j=i+1 ; j<size ; j++)
         {
             if(arr[i] == arr[j])
             {
                 count++;
                 arr[j]='0';
             }
         }
         if(count>0 && arr[i]!='0')
            printf("%d ",arr[i]);
     }
}

