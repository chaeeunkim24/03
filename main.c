#include <stdio.h>

int main(void)
{
  char c;
  char d;
  int a;
  int b;

  printf("input a number : ");
  scanf("%c", &c);

  d = c + 1;
  a = c - '\0';
  b = d - '\0';
  
  printf("the next character of %c (%i) is %c (%i)\n", c, a, d, b);
 
  system("PAUSE");
  return 0;
}
