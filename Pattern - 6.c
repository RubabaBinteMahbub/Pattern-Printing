/*
1   	 1
12  	21
12  3 21
*/

#include<stdio.h>
int main()
{
  int n,i,j;
  printf("n = ");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {		
        printf("%d",j);
    }
 
   for(j=1;j<=(2*(n-i));j++)
    {
        printf(" ");
    }
    for(j=i;j>=1;j--)
    {
        if (j==3) continue ;

        printf("%d",j);
    }
     
    printf("\n");
  }
  
  return 0;   
}
