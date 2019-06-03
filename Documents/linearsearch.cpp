#include <stdio.h>
int main()
{int a[100], x, c, n;
 printf("Enter number of elements in array\n");
 scanf("%d", &n);
 printf("Enter %d integers\n", n);
 for (c = 0; c < n; c++)
 scanf("%d", &a[c]);
 printf("Enter a number to search\n");
 scanf("%d", &x);
 for (c = 0; c < n; c++)
  {if (a[c] == x)
   {printf("%d is present at location %d.\n", x, c+1);
    break;
   }
  }
  if (c == n)
  printf("%d isn't present in the array.\n", x);
}