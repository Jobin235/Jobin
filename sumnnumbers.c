#include <stdio.h>
int main()
{
  int num, j, sum = 0;
  printf("Enter a positive integer: ");
  scanf("%d",&num);
  for(j=1; j<= num; ++j)
      sum += j;
      printf("Sum = %d",sum);
  return 0;
}

    Contact GitHub API Training Shop Blog About 

    © 2016 GitHub, Inc. Terms Privacy Security
