#include <stdio.h>
 
int main()
{
  int r1, c1, r2, c2, count, count2, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter the number of rows and columns of first matrix\n");
  scanf("%d%d", &r1, &c1);
  printf("Enter the elements of first matrix\n");
 
  for (count = 0; count < r1; count++)
    for (count2 = 0; count < c1; count2++)
      scanf("%d", &first[count][count2]);
 
  printf("Enter the number of rows and columns of second matrix\n");
  scanf("%d%d", &r2, &c2);
 
  if (c1 != r2)
    printf("Matrices with entered orders can't be multiplied with each other.\n");
  else
  {
    printf("Enter the elements of second matrix\n");
 
    for (count = 0; count < r2; count++){
	
      for (count2= 0; count2 < c2; count2++)
      {
	  
        scanf("%d", &second[count][count2]);}
		}
 
    for (count = 0; count < r1; count++) {
      for (count2 = 0; count2 < c2; count2++) {
        for (k = 0; k < r2; k++) {
          sum = sum + first[count][k]*second[k][count2];
        }
 
        multiply[count][count2] = sum;
        sum = 0;
      }
    }
 
    printf("Product of entered matrices:-\n");
 
    for (count = 0; count < r1; count++) {
      for (count= 0; count2 < c2; count2++)
        printf("%d\t", multiply[count][count2]);
 
      printf("\n");
    }
  }
 
  return 0;
}
