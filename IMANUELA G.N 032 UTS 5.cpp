#include <stdio.h>
 
int main(void)
{
  int i = 3;
  int j;
  while (i <= 11) {
    j = 3;
    while (j <= 11) {
      printf("%i * %i = %i\n",i,j,j*i);
      j++;
    }
    printf("\n");
    i++;
  }
}
