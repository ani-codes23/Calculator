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
        
    }while(choice!=0)
    return 0;
}
