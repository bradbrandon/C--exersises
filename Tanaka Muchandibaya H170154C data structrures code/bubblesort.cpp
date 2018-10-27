#include <stdio.h>
#include <stdlib.h>

//154071h
int swap(int *a1, int *a2){
	int temp=*a1;
	*a1=*a2;
	*a2=temp;
}

void bubblesort(int arr[],int n){
	
	int i,j;
	for(i=0; i<n-1;i++){
		//last i elements are already in place
		for (j=0; j<n-i-1; j++)
			if (arr[j]>arr[j+1])
			swap(&arr[j],&arr[j+1]);
			
			
	}
}
void print(int arr[], int size){
	int i;
	for (i=0; i<size;i++){
		printf("%d",arr[i]);
		printf("  ");
				
	}
}
int main(){

int count=0,n=0, value=0;

	printf("enter the number of items to be entered entered into the array\n");
	scanf("%d",&n);

    int arr[n];
    int arr_size = sizeof(arr)/sizeof(arr[0]);
 	
 	for (count = 0; count< n; count++){
	   printf("Enter the value to insert\n");
	   scanf("%d", &value);
	   arr[count] = value;}

    printf("Given array is \n");
    print(arr, arr_size);
     bubblesort(arr,  arr_size );
     printf("\n sorted array is\n");
       print(arr, arr_size);
     return 0;
     
 
}

