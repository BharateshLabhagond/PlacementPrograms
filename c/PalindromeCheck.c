//Check for palindrome

#include<stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    
    int rem,sum=0;
    while(num>0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num/=10;
    }
    
    if(temp==sum)
        printf("the %d is palindrome",temp);
    else
        printf("the %d is not palindrome",temp);
}