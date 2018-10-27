#include <stdio.h>
#include <stdlib.h>

int main()
{char menu;
int n1, n2;
float ans;

//input and choice of arithmetic
printf("maximum of two numbers can be computed at a time\n");
printf("Enter '-' for subtration,  + for addtion,* for multipication and / for division\n");
scanf("%c",&menu);
   char grade = 'B';


   switch(menu) {
      case '-' :
          printf("enter the numbers to be subtracted \t\n");
          scanf("%d %d",&n1,&n2);
		
          ans=n1-n2;
          printf("%d-%d=%f\n",n1,n2,ans);
         break;

      case '+' :
         printf("enter the numbers to be Added \n" );
        scanf("%d %d",&n1, &n2);
          ans=n1+n2;
          printf("%d+%d=%f\n",n1,n2,ans);

         break;
      case '/' :
      	
      	printf("enter the numbers to be Divided\n" );
          scanf("%d %d",&n1, &n2);
          if (n2==0)
          
          {printf("Error division by zero not possible\n");
		  break;}
		  else
          {ans=n1/n2;
          
          printf("%d/%d=%f\n",n1,n2,ans);

         
         break;
		  }
      case '*' :
        printf("enter the numbers to be Multiplied\n" );
        scanf("%d %d",&n1, &n2);
          ans=n1*n2;

          printf("%d*%d=%.4g\n",n1,n2,ans);

         break;
      default :
         printf("Invalid input\n" );
   }




    return 0;
}

