//Armstrong Number or not

#include<stdio.h>
#include<math.h>
void main()
{
    
    int n1,n2;
    printf("Enter interval:\n");
    printf("start no.:");
    scanf("%d",&n1);
    printf("end no.:");
    scanf("%d",&n2);
    
    printf("Armstrong numbers in the range %d and %d are:\n",n1,n2);
    for(int i=n1 ; i<=n2 ; i++)
    {
        int temp = i,rem=0,sum=0;
        int dig = log10(i) + 1;
        for(int j=i ; j>0 ; j/=10 )
        {
            
            rem = j%10;
            sum = pow(rem,dig) + sum;
        }
        
        if(temp==sum)
        printf("%d ",temp);
    }
    
    
}

