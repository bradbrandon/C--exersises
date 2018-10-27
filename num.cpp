#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b , c, arry[3],i,j,temp;

//input for variables
printf("Enter 3 numbers\n");
printf("First number:\t");
scanf("%d",&a);
printf("\n second number:\t");
scanf("%d",&b) ;
printf("\nthird number:\t");
scanf("%d",&c);

arry[0]=a;
arry[1]=b;
arry[2]=c;
//comparison
if (a>b&&a>c)
{
    printf("\nthe largest number is %d\n",a);
    
  
}

else if (b>a &&b>c)
{
    printf("the largest number is %d\n",b);
    
    
}
else if (c>a&&c>b)
{
    printf("\n the largest number is %d\n",c);
    
    }
//ascending order output
 for(i=0;i<3;i++)
 {
 
{for (j=i+1;j<3;j++)
    if (arry[i]>arry[j])
    {temp= arry[i];
    arry[i]=arry[j];
    arry[j]=temp;
	}
}}
printf("\n ascending order:\t");
for(i=0;i<3;i++)
{printf(" %d\t",arry[i]);
}
printf("\n descending order:\t");
for(i=2;i>=0;i--)
{printf(" %d\t",arry[i]);
}



    return 0;
    
    
    
    
}

