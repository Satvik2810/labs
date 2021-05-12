#include<stdio.h>
void main()
{ int n,val=0;
 printf("please enter the integer: \n");
 scanf("%d", &n);
 if (n>=0)
   {for(int i=n;i<= 2*n; i++)
    { val = val + i;
    }
  }
  else  
   { for(int k=(2*n);k>=3*n; k--)
     { val = val + k;
     }
    }
 printf("the calculated value is : %d\n", val);	
}