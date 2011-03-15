/*program przelicza długości w calach na centymetry i odwrotnie*/
#include <stdio.h>
int main() {
  float x;
  char z1, z2;
  printf("Podaj Twoj wzrost: ");
  scanf("%f %c%c", &x, &z1, &z2);
  
  if ( z1 == 'c' && z2 == 'm')
    printf("%.1f cm to %.1f in", x, x/2.54);
  else if ( z1 == 'i' && z2 == 'n')
    printf("%.1f in to %.1f cm", x, x*2.54);
  else
    printf("\nBłędnie podane jednostki!\n");
  return 0;
}
