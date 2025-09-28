//Reverse array elements

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
     
     for(int i=0 ; i<size/2 ; i++)
     {
         int temp = arr[i];
         arr[i] = arr[size - 1 - i];
         arr[size - 1 - i] = temp;
     }
     
     printf("\nreversed array: ");
     for(int i=0; i<size ; i++)
     {
        printf("%d ",arr[i]);
     }
     
     
 }