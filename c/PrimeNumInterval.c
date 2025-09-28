//Prime number in given range a & b

#include<stdio.h>
#include<math.h>

void main()
{
    int n1,n2;
    printf("Enter range\n");
    printf("start point: ");
    scanf("%d",&n1);
    printf("end point: ");
    scanf("%d",&n2);
    
    if(n1>n2)
        printf("plz enter valid interval");
    else
    {
        printf("Prime numbers in the range from %d to %d are: \n",n1,n2);
        for(int i=n1 ; i <= n2 ; i++)
        {
               
            if(i==0 || i==1)
                continue;
            
            
            int flag=1;
            for(int j=2 ; j <= sqrt(i) ; j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            }
            
            if(flag)
                printf("%d ",i);
        
            
        }
    }
}