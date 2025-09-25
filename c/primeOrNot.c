#include<stdio.h>
#include<math.h>

void main()
{
    int num,flag;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num<=1 || num==0)
       flag=0;
    else
    {
        flag=1;
        for(int i=2; i<=sqrt(num) ; i++)
        {
            if(num%i==0){
                flag=0;
                break;
            }
        }
    }

    if(flag)
        printf("%d is a prime number.\n",num);
    else
        printf("%d is NOT a prime number.\n",num);
}