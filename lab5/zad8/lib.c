#include <stdio.h>

void rysuj_1() {

  int w = 1;
  int x = 1;

  for ( w = 1; w < 5; w++ ) { 
    for ( x = 1; x <= w; x++ ) { 
      putchar('*');
    }
    printf("\n");
  }
  printf("\n");
}

void rysuj_2() {

  int w = 4;
  int x = 1;

  for ( w = 4; w > 0; w--) {
    for ( x = 1; x <= w; x++ ) {
      putchar('*');
    }
    printf("\n");
  }
  printf("\n");
}

void rysuj_3() {

  int w = 4;
  int x = 1;
  int s = 1; 
  int smax = 0; 

  for ( w = 4; w > 0; w-- ) {
    for ( s = 1; s <= smax; s++ ) {
      putchar(' ');
    }
    /* s = 1; */
    for ( x = 1; x <= w; x++ ) {
      putchar ('*');
    }
    printf("\n");
    smax = smax + 1;
  }
  printf("\n");
}

void rysuj_4() {
  
    int w = 4;
    int x = 1;
    int s = 1; 
    int smax = 3; 

    for ( w = 1; w < 5; w++ ) {
      for ( s = 1; s <= smax; s++ ) {
putchar(' ');
      }
      for ( x = 1; x <= w; x++ ) {
putchar ('*');
      }
      printf("\n");
      smax = smax - 1;
    }
    printf("\n");
}
