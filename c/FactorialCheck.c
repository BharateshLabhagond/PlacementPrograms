#include<stdio.h>

void main()
{
    int num,temp,i=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;

    while(1)
    {
        if(num%i==0)
            num/=i;
        else
            break;
        i++;
    }
    if(num==1)
    printf("%d is factorial of %d!\n",temp,i-1);
    else
    printf("%d is not a perfect factorial of any number\n",temp);

}