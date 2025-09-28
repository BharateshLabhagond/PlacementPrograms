// sum of array elements

#include<stdio.h>

void main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    
    int arr[size],sum=0;
    printf("\nEnter elements in the array: ");
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    
    printf("sum of array elemnts is: %d",sum);
    
}