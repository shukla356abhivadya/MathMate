#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int prime(int n)
{
    int i;
    if(n==1)
    {
    return 0;
    }
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void table(int n)
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("\n %d * %d = %d",n,i,n*i);
    }
}
void even_odd(int n)
{
    if(n%2==0)
    {
        printf("\n%d is an Even Number",n);
    }
    else
    {
        printf("\n%d is a Odd Number",n);
    }
}
int main()
{
    int num,choice,n;
    while(1)
    {
        printf("\nEnter a number\n");
        scanf("%d",&num);
        printf("\nEnter Choice:-\n1.Factorial\n2.Table\n3.Prime\n4.Even or Odd\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nFactorial of %d = %d",num,factorial(num));
            break;
            case 2:
            printf("\nTable of %d\n",num);
            table(num);
            break;
            case 3:
            n=prime(num);
            if(n==1)
            {
                printf("\n%d is a Prime number",num);
            }
            else
            {
                printf("\n%d is not a prime number\n",num);
            }
            break;
            case 4:
            even_odd(num);
            break;
            default:
            printf("\nInvalid Choice");
        }
    }
    return 0;
}