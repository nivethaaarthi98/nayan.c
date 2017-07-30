#include<stdio.h>
#include<string.h>
void swap(int*,int*);
void main()
{
int num1,num2;
printf("enter two numbers");
scanf("%d %d",num1,&num2);
printf("the numbers before swapping are number1=%d number2=%d",num1,num2);
swap(&num1,&num2);
printf("the numbers after swapping are number1=%d number2=%d",num1,num2);
}
void swap(int*x,int*y)
{
*x=*x^8y;
*y=*x^*y;
*x=*x^*y;
}
