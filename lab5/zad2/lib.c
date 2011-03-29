#include <stdio.h>

void rysuj_szachownice() {

  int w = 1;
  int x = 1;

  for ( w=1; w < 9; w++) { // kontroluje ilosc wierszy
    if ( w % 2 == 0 ) {
      for ( x=1; x < 9; x++) { // ilosc gwiazdek w wierszu
printf(" *");
      }
    }
    else {
      for( x=1; x < 9; x++ ){
printf("* ");
      }
    }
    x = 1;
    printf("\n");
  }
}
