#include<stdio.h>
#include<conio.h>

int main()
{
int n, c, d, num = 1, space;

printf("Enter any number (1-10): ");
scanf("%d",&n);
space=n-1;
for(d=1; d<=n; d++)
{
num=d;
for(c=1; c<=space; c+=2)
printf(" ");
space--;
for(c=1; c<=d; c+=2)
{
printf("%d", num);
num++;
}
num--;
num--;
for(c=1; c<d; c++)
{
printf("%d", num);
num--;
num--;
}
printf("\n");
}
return 0;
}
