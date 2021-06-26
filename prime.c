#include<stdio.h>  
int main()
{    
    int n,i,prime=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0) 
        {
            prime=0;
            break;
        }
        prime=1;
    }
    if(prime==0)
    {
        printf("Number is not a Prime");
    }
    else
    {
        printf("Number is a Prime");
    }
}
