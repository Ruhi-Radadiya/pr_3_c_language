#include<stdio.h>
#include<conio.h>
void main()
{
int num,count=0;
clrscr();
printf("Enter any number:");
scanf("%d",&num);
while(num!=0){
num=num/10;
count++;
}
printf("total number of digits is : %d",count);
getch();
}