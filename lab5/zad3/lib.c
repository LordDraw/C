#include <stdio.h>

int wypisz_liczby(int a, int b) {

  if ( a + 1 < b ) {
    int x = a + 1;
    while ( x < b ) {
      printf(" %i \n", x);
      x = x + 1;
    }
    return 0;
  }
  else {
    printf("Nie istnieje ani jedna taka liczba calkowita, ze 
%i<...<%i\n", a, b);
    return 0;
  }
}
