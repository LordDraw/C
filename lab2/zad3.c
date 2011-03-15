#include <stdio.h>
/*program pobiera wiek w latach i przelicza go na dni i sekundy */

int main() {
  int i, wiek, leap, year;
  long long licz, sek;
  printf("Podaj wiek: ");
  scanf("%i", &wiek);
  year = 2011 - wiek;
  leap = 0;
  i=year;
  sek=0;
  licz=0;

  printf("Urodzony w %i roku\n", year);
  for (i=year; i<2011; i=i+1) {
    if ( i%4==0 && i%100!=0 || i%400 == 0 ) {
      leap = leap + 1;
      licz = licz + 366;
    }
    else
      licz = licz + 365;
  }
  /*liczba sekund = liczba dni x 60 x 60 x 24*/
  sek = licz * 86400;
  printf("Żyjesz już %lli dni czyli %lli sekund\n", licz, sek);
  printf("Policzono %i lat przestępnych\n", leap);
  return 0;
}
