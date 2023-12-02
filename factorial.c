#include<stdio.h>
int main()
{
  int n,i,f;
  printf("Enter the number:");
  scanf("%d",&n);
  f=1;
  for(i=0;i<=n;i++)
    {
      f *= i;
    }
  printf("The factorial of %d is %d",n,f);
}