#include <stdio.h>



int main()
{
int min,max, sum, count, count2;

//input 
printf("Enter the min and max number respectively of the range\n");
scanf("%d %d",&min,&max);
count2=0;
// computations


for(count=min; count<=max;count++)

{if (count%2==0)
  
{count2++;
printf("even No:%d is %d\n",count2,count);
}

}





return 0;
}


