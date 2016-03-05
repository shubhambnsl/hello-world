#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,mul=1;
clrscr();
printf("Enter the number till what you wanna multiples of 3:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%3==0)
{
mul=mul*i;
}
}
printf("the result is: %d",mul);
getch();
}