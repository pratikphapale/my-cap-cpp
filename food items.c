#include<stdio.h>
int main()
{
    int food;
    printf(" 1.Pizza\n 2.Burger\n 3.Pasta\n 4.French Fries\n 5.Sandwich\n");
    printf("Enter Food number: ");
    scanf("%d",&food);
    switch(food)
    {
        case 1: printf(" Food Item-Pizza\n Price-239");
        break;
        case 2: printf(" Food Item-Burger\n Price-129");
        break;
        case 3: printf(" Food Item-Pasta\n Price-179");
        break;
        case 4: printf(" Food Item-French Fries\n Price-99");
        break;
        case 5: printf(" Food Item-Sandwich\n Price-149");
        break;
        case 6: printf("Select from the above list");
        break;
    }
    return 0;
}
