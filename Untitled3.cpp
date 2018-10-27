//20. Write a program to access a variable using pointer.
//21. Write a program to print the element of array using pointers.
//22. Write a program to print the elements of a structure using pointers.
 #include <stdio.h>
 
 int main()
 {
 	int row, space, display, i, number;
 	
 	printf("up to? \n");
 	scanf("%d", &number);
 	row = number;
 	
 	 	for(i=i; i<=row; i++ ){
 		if((i%2)!=0){
		 for(space=row-i; space>= 1; --space){
			printf(" ");
 		}
 		 for(display = i; display >=1; display--){
		 	if((display%2)!=0){
		 		printf("%d ", display);
			 }
			 else{
			 	continue;
			 }
		 }
		 printf("\n");
	}
	else{
		continue;
		}
	}
 	for(i=row; i>=1; i-- ){
 		if((i%2)!=0){
		 for(space=row-i; space>= 1; --space){
			printf(" ");
 		}
 		 for(display = i -1; display >=1; display--){
		 	if((display%2)!=0){
		 		printf("%d ", display);
			 }
			 else{
			 	continue;
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
