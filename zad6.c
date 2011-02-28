#include <stdio.h>
#include <math.h>
int main()
{
int a;
int pierw;
printf("Podaj jakas liczbe rzeczywista : \n");
scanf("%f",&a);
if (a<=0)
{
printf ("blad! Liczby ujemne oraz zero nie maja pierwiastkow kwadratowych!");
return 0;
}
else {
pierw=sqrt(a);
printf("Pierwiastek kwadratowy z podanej przez ciebie liczby to: %f",a);
}
}
