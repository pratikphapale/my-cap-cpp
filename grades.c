#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Marks: ");
    scanf("%d",&n);
    if(n>=85)
    {
        printf("Grade A");
    }
    else if(n<=84 && n>=70)
    {
        printf("Grade B");
    }
    else if(n<=69 && n>=55)
    {
        printf("Grade C");
    }
    else if(n<=54 && n>=40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}
