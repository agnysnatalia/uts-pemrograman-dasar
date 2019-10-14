#include <stdio.h>
 
int main(void)
{
  for (int i = 2; i <= 5; i++) {
    for (int j = 2; j <= 5; j++) {
      printf("%i * %i = %i\n",i,j,j*i);
    }
    printf("\n");
  }
  return 0;
}
