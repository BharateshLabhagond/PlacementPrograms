#include<stdio.h>
#include<string.h>

void main()
{
    char num[100];
    int len,start=0,end;

    printf("Enter input:");
    scanf("%[^\n]s",num);

    len = strlen(num);
    end=len-1;
    while(start<end)
    {
        char temp = num[start];
        num[start] = num[end];
        num[end] = temp;
        start++;
        end--;
    }
    printf("reversed : %s",num);
}