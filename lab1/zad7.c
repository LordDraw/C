#include <stdio.h>
#include <math.h>
int main()
{
int a;
int pierw;
int odwr;
printf("Podaj jakas liczbe rzeczywista : \n");
scanf("%f",&a);
if (a<=0)
{
printf ("blad! Nie mozna podac odwrotnosci podanej przez ciebie liczby 
ani jej pierwiastkow!");
return 0;
}
else {
pierw=sqrt(a);
printf("Pierwiastek kwadratory z podanej przez ciebie liczby to: %f 
\n",a);
odwr=1/a;
printf("Natomiast odwrotnosc podanej przez ciebie liczby to: %f",a)
}
}
