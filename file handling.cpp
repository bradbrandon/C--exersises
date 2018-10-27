#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
int main()
{// variable declaration
   char str[1000]="LOVE";
   FILE *fptr;
   char fname[20];
//file name entering
    printf("\n\n Enter the file name :");
    scanf(" %s",&fname);
    
    strcat(fname,".txt");
    
    
    // Error for checking if file exist
   fptr=fopen(fname,"w+");	
   if(fptr==NULL)
   {
      printf(" Error in opening file!");
      exit(1);
   }
   //changing  of data in the  file
    
   
   fprintf(fptr,"%s",str);
   fclose(fptr);
   printf("\n The file %s changed succcessfully...!!\n\n",fname);
   return 0;
}


 
