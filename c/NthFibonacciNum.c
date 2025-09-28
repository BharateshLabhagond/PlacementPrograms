//print Nth fibonacci number

#include<stdio.h>

void main()
{
    int num;
    printf("Enter how many fibonacci numbers to be printed?\n");
    scanf("%d",&num);
    
    int n1=-1,n2=1,fibo=0;
    for(int i=0 ; i<num ; i++)
    {
        fibo = n1+n2;
        n1=n2;
        n2=fibo;
    }
    printf("the %dth fibonacci number is %d",num,n2);
}