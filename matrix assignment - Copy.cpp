/* ....
Tanaka Muchandibaya
H170154C 
Dept: SE
C Programming assignment 2....
*/

#include <stdio.h>
#include <stdlib.h>
       



int main(){
	// variable declaration
	
	RESTART:// Label used to restart program  linked to goto statement down the lines of code
	int mrow1,mcolmn1,count,count2, mrow2,mcolmn2, k ,sum=0 ;
	char opt;
	
	//input 
	printf("Enter  number of rows and columns of first  matrix\n");
	scanf("%d  %d", &mrow1,&mcolmn1);
	
	printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d %d", & mrow2, &mcolmn2);
    
 
 
 // while loop validates user input  to make sure  the two matrix type allow for multiplicatio
          while  (mrow2!= mcolmn1){
		  
             printf("Error! column of first matrix not equal to row of second.\n\n");
	         printf("Enter  number of rows and columns of first  matrix\n");
	         scanf("%d  %d", &mrow1,&mcolmn1);
	        
	         printf("Enter the number of rows and columns of second matrix\n");
             scanf("%d %d", &mrow2, &mcolmn2);}
	         
	  int matrix1[mrow1][mcolmn1],  matrix2[mrow2][mcolmn2], result[mrow1][mcolmn2];
	  
	  //input of elements to matricies
    printf("Enter the elements of first matrix\n");
	for (count=0; count<mrow1;count++){
	  for (count2= 0; count2 < mcolmn1; count2++){
                scanf("%d", &matrix1[count][count2]);
                                                       }
      	                                   }	
 
    
  
    printf("Enter the elements of second matrix\n");
    for (count = 0; count< mrow2; count++)
      for (count2 = 0; count2 <mcolmn2 ; count2++)
        scanf("%d", &matrix2[count][count2]);
 
 
  
 // computation
 
   for (count = 0; count< mrow1; count ++) {
     
	   for (count2 = 0; count2 < mcolmn2; count2++) {
      
            for (k = 0; k < mrow2; k++) {
              sum = sum + matrix1[count][k]*matrix2[k][count2];  }
 
        result[count][count2] = sum;
        sum = 0;
      }
    }
 // output of product
    printf("Product of entered matrices:\n");
 
    for (count= 0; count < mrow1; count++) {
      for (count2= 0; count2 < mcolmn2; count2++){
	  
        printf("%d\t", result[count][count2]);
 
      }
      printf("\n");
    
  }
  
  // to allow for continuation or discontinuation based on user choice
  INVALID:
 printf("Do you want to do another computation :  enter Y to confirm or N to exit program\n");
 scanf("%c" ,&opt) ;
 
  if (opt == 'Y'){ 
        system("cls"); // function to clear screen
  
	 	goto RESTART;	 // programs goes to label RESTART at the beginning of the main fuction
		          }
	 	 
  else  if(opt == 'N') { // Program closes
     
	  goto CLOSE;}
	  else {  printf("Invalid input...... ;\n");
	  goto INVALID;
	  }
	 

 
CLOSE:
return 0;}

	
	
	
	
	

