#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,f;
clrscr();
printf("Enter any number:");
scanf("%d",&num);
i=num%10;
while(num>=10){
num=num/10;
}
f=num;
printf("The sum of first and last digits is %d",f+i);

getch();
}