//Prime number or not

#include<stdio.h>
#include<math.h>

void main()
{
    int num;
    
    printf("Enter a number :");
    scanf("%d",&num);
    
    if(num<0 || num==1 || num==0)
        printf("invalid input");
        
    else
    {
        int flag=1;
        for(int i=2; i<=sqrt(num) ; i++)
        {
            if(num%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            printf("%d is a prime number",num);
        else
            printf("%d is not a prime number",num);
    }
}
