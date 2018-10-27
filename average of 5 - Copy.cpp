/*
Tanaka Muchandibaya
H170154C
Dept: SE
C Programming assignment 1
*/

#include <stdio.h>
#include <stdlib.h>
// function to make sure input is in the correct
int validate(int *addr ){
	// loop repeats until input is correct
 while ((*addr>=100)||(*addr<=10) )// condition will be true if either condition fails but false when both are met  hence use of the or logical function
    {printf("the element  %d is out of range\n 	 ",*addr);
       printf(" \n enter the element again:\t");
            scanf("%d",&*addr);}
 return *addr;}


int main(){
	// variable declaration
	int i,sum=0, num[5];
	float avg;//declaration float beacuase number may contain fractional parts


// input
printf("Input.......\n");
for(i=0; i<5; i++){


    printf("\n enter element the  %d element:",i+1);

    scanf("%d", &num[i]);
    validate(&num[i]);//validation  function call
    sum+=num[i];// sum is incremented with entered value after it has been validated

   	}

	avg= sum/5;// total after  all values entered is divided by 5 to get average

	//output
	printf("sum is  %d and average is   %f\n",sum,avg);
	return 0;
}


