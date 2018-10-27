#include <stdio.h>
#include <stdlib.h>
       
	


int main(){
	// variable declaration
	
	restart:
	int mrow1,mcolmn1,count,count2, mrow2,mcolmn2, k ,sum=0 ;
	int matrix1[100][100], matrix2[100][100], result[100][100];/*.. matrix size 100 because that is the maximum  i think a 
	user can input this covers a large range of inputs ....*/
	char opt;
	
	//input 
	printf("Enter  number of rows and columns of first  matrix\n");
	scanf("%d  %d", &mrow1,&mcolmn1);
	
	printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d %d", & mrow2, &mcolmn2);
    
 
          while  (mrow2!= mcolmn1){
		  
             printf("Error! column of first matrix not equal to row of second.\n\n");
	         printf("Enter  number of rows and columns of first  matrix\n");
	         scanf("%d  %d", &mrow1,&mcolmn1);
	
	         printf("Enter the number of rows and columns of second matrix\n");
             scanf("%d %d", &mrow2, &mcolmn2);}
	
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
 
    printf("Product of entered matrices:\n");
 
    for (count= 0; count < mrow1; count++) {
      for (count2= 0; count2 < mcolmn2; count2++){
	  
        printf("%d\t", result[count][count2]);
 
      }
      printf("\n");
    
  }
  
  // to allow for continuation
  
 printf("Do you want to do another computation :  enter Y to confirm or N to exit program\n");
 scanf("%c" ,&opt) ;
 
  if (opt == 'Y'){ system("cls"); 
  
	 	goto restart;	 }
	 	
	 else  { 
	  goto CLOSE;}
	  
	 

 
CLOSE:
return 0;}

	
	
	
	
	

