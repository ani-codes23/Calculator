#include <stdio.h>
int add(int a ,int b)
{
    return a+b;
}
int substract(int a,int b)
{
    return a-b;
}
int divide(int a,int b)
{
    return a/b;
}
int multiply(int a,int b)
{
    return a*b;
}
int main()
{
    int choice;
    
    do
    {
        printf("\n1.Add 2.Substract 3. Multiply 4.Divide");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            add(a,b);
            break;
            case 2:
            substract(a,b);
            break;
            case 3:
            multiply(a,b);
            break;
            case 4:
            divide(a,b);
            break;
            default: 
            printf("\nInvalid Input");
            break;
        }
    }while(choice!=0)
    return 0;
}
