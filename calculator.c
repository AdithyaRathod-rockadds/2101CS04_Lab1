#include<stdio.h>

//for adddition
float add(float a, float b)
{
    return a+b;
}
//for substraction
float substract(float a, float b)
{
    return a-b;
}

//for multiplication
float multiply(float a, float b)
{
    return a*b;
}

//for division
float divide(float a, float b)
{
    return a/b;
}

//main function
int main()
{
   //variable declaration 
   float a, b;
   char operator;
   //user input 
   printf("Enter the operator (+,-,*,/):\n");
   scanf("%c", &operator);
   printf("Enter the first number=\n");
   scanf("%f", &a);
   printf("Enter the second number=\n");
   scanf("%f", &b);

   //output 
    switch (operator)
    {
        case '+':
            printf("The Result is %f", add(a,b));
            break;
        case '-':
            printf("The Result is %f", substract(a,b));
            break;
        case '*':
            printf("The Result is %f", multiply(a,b));
            break;
        case '/':
            printf("The Result is %f", divide(a,b));
            break;
        default:
            printf("wrong operatar detected!!");
            break;
    }

    return 0;
}