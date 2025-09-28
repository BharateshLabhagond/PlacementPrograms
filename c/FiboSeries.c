//Fibonacci series in the interval of two numbers

#include<stdio.h>

void main()
{
    int low,high;
    printf("Enter interval to print the fibonacci numbers\n");
    printf("start number: ");
    scanf("%d",&low);
    printf("end number: ");
    scanf("%d",&high);
    
    int a=0,b=1,c=0;
    while(a<=high)
    {   
        if(a>=low){
            printf("%d ",a);
        }
        c=a+b;
        a=b;
        b=c;
        
        
    }
    
}