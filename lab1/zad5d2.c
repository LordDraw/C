/* Program ten dla dw�ch liczb wczytanych z klawiatury
   wypisuje, kt�ra z nich jest wi�ksza. */
#include <stdio.h>
int main()
{
   int licz1, licz2 ;

   printf("Podaj pierwsza liczbe: ");
   scanf("%d", &licz1);
   printf("Podaj druga liczbe: ");
   scanf("%d", &licz2);
   if (licz1>licz2)
     {
printf ("wieksza jest liczba %d od %d.",licz1,licz2);
}
else if (licz1<licz2) {
printf ("wieksza jest liczba %d od %d.",licz2,licz1);
}
else {
printf ("Liczby sa rowne!");
}
   return 0;
}

