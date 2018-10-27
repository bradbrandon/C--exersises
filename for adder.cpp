#include <stdio.h>



int main()
{
int min,max, sum, count;

//input 
printf("Enter the min and max number respectively of the range\n");
scanf("%d %d",&min,&max);

//initialisation- setting an initial value to variables

sum=0;

// computations
for(count=min; count<=max;count++)
{sum+=count;
}//output
printf("the sum of the numbers between the range is %d\n",sum);
return 0;
}
