#include <stdio.h>


int main()
{int num1,num2, op;
float ans;

printf("enter the two numbers\n");
scanf("%d %d",&num1, &num2);
printf("Enter 1 :+,,2:-, 3:/,4:*\n");
scanf("%d",&op);


//comparioson
switch(op)
{case 1 :
	ans=num1+num2;
	printf("sum is %f\n",ans);
   break;
	
case 2:
	ans=num1-num2;
	printf("difference is  %f \n",ans);
   break;
   
   default:
   	printf("invalid option\n");


}
return 0;
}

