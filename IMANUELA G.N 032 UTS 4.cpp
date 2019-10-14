#include <stdio.h>
 
int main(void)
{
  int i = 5;
  int j;
  while (i <= 10) {
    j = 5;
    while (j <= 10) {
      printf("%i * %i = %i\n",i,j,j*i);
      j++;
    }
    printf("\n");
    i++;
  }
}
