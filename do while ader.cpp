#include <stdio.h>

int main()
{
int min,max, sum, count;

//input 
printf("Enter the min and max number respectively of the range\n");
scanf("%d %d",&min,&max);

//initialisation- setting an initial value to variables

sum=0;
count=min;

//computation
do{sum+=count;
count++;
}
while (count<=max);
//output

printf("sum of numbers between range is %d",sum);
return 0;
}

