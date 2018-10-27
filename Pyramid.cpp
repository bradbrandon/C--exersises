
 #include <stdio.h>
 
 int main()
 {
 	int row, space, display, i, number;
 	
 	printf(" Display odd numbers up to? \n");
 	scanf("%d", &number);
 	row = number;
 	
 	 	for(i=1; i<=row; i++ ){
 	 		
 		if((i%2)!=0){  //conditional statement to skip even row/ not to repeat row
		 for(space=row-i; space>= 1; --space){
			printf(" ");
 		}
 		 for(display = i; display >=1; display--){ //for loop to display numbers in reverse order
		 	if((display%2)!=0){
		 		printf(" %d ", display); // spaces present before and after %d
			 }
			 else{
			 	continue; // continue statement to skip even numbers in the displayed pattern
			 }
		 }
		 printf("\n");
	}
	else{
		continue;
		}
	}
	
	 return 0;
 }
