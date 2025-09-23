#include<stdio.h>
void main()
{
    int n,rem,rev=0;
    scanf("%d",&n);  //206
    while(n>0)
    {
        rem = n%10;   //206 % 10=6
        rev = rev*10 + rem;
        n = n/10;
    }
    printf("reversed number: %d",rev);
}