#include <stdio.h>
int main()
{
  int i , j;
  int Sum=0;
  int arr[3][3];
  for(i=0;i<=2;i++)
  {
  for(j=0;j<=2;j++)
  {
    printf("Input elements in the matrix:\n");
	printf("element- [%d][%d] = ",i,j);
	 scanf("%d",&arr[i][j]);
     }
  }
int *p = &i;
int *ptr = &j;  
  printf("The matrix is :\n");
  for(i=0;i<=2;i++)
  {
      for(j=0;j<=2;j++)
  {
  	
      printf("  %d",arr[*p][*ptr]);         
  }
    printf("\n");                      
}
for(i= 0; i< 3; i++)
  	{
   		Sum = Sum + arr[*p][*p];
  	}
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );
 	return 0;
}
