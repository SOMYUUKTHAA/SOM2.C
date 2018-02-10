#include<stdio.h>
void main()
{
int s;
printf("Enter value");
scanf("%d",&s);
if(1<=s<=100000)
{
if(s%2==0)
printf("THE ENTERED VALUE IS EVEN");
else
printf("THE ENTERED VALUE IS ODD");
}
}
