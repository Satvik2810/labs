#include <stdio.h>

int main() {
  int n, i, k, sum=0;
  printf("How many numbers do you wish to add?\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the next number:");
    scanf("%d",&k);
    if(k<0)
    {
      printf("Please enter positive integeres only.\n");
      n=n+1;
      continue;
    }
    if(k==0)
    {
      break;
    }
    sum = sum+k;
    continue;
  }
  printf("%d\n", sum);
return 0;
}