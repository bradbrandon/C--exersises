#include <stdio.h>
int  gcd(int a,int b){
int t;
    while(b != 0) {
	
       t = b; 
       b = a % b; 
       a = t; }
    return a;
}



int main()	{
	
	int i,n,mod, hcf;
	 	printf("Enter the number of numbers for which the hcf shall be calculated .../n");
	 	n--;
       scanf("%d",&n);
       
       
       int nums[n];
	   printf("enter the numbers for which the hcf is being calculated\n");
	 	for(i=0; i<=1;i++){
        scanf("%d",&nums[i]);
        
	}

	 
	
//	int nums[1] to get 
	for(i=0; i<1;i++){
		mod=gcd(nums[i],nums[i+1]);
	}
	
	for (i=1;i<n;i++){
			hcf=gcd(mod,nums[i]);
	        mod=hcf;
	}
	
	printf("the hcf is %d\n",hcf);
return 0;}
	



	
	



// user input validition
