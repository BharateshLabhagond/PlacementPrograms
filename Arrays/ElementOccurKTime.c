//find element that occurs k times

//Count each of element in an array 

#include<stdio.h>

void main()
{
    int size,k;
     printf("Enter size of the array: ");
     scanf("%d",&size);

     printf("Enter k: ");
     scanf("%d",&k);
     
     int arr[size];
     printf("Enter elements into array: ");
     for(int i=0; i<size ; i++)
     {
        scanf("%d",&arr[i]);
     }
     
     int visited[100]={0};
     
     for(int i=0 ; i<size ; i++)
     {
        int count = 1;
        if(visited[i]==0)
        {
            for(int j=i+1 ; j<size ; j++)
             {
                 if(arr[i]==arr[j])
                 {
                     count++;
                     visited[j]=1;
                 }
            }
            if(count == k)
                printf("'%d' occurs %d times\n",arr[i],count);
        }
     }
}
