#include<stdio.h>
void main()
{
int n;
printf("Enter a number between 1-5:\n");
scanf("%d",&n);
if(n==1)
{
printf("Food item - Pasta\n");
printf("Price - Rs 179\n");
}
else if(n==2)
{
printf("Food item - Pizza\n");
printf("Price - Rs 249\n");
}
else if(n==3)
{
printf("Food item - sandwich\n");
printf("Price - Rs 150\n");
}
else if(n==4)
{
printf("Food item - burger\n");
printf("Price - Rs 99\n");
}
else
{
printf("Food item - french fries\n");
printf("Price - Rs 111\n");
}
}