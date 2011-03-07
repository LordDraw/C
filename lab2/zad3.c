#include<stdio.h>
#include<time.h>
int sumaDni = 0;
int przezyteDni(int poczatek,int koniec)
{
if(poczatek < koniec)
{
if( (!(koniec%4) && koniec%100) || !(koniec%400) )
{
sumaDni += 366;
przezyteDni(poczatek,koniec-1);
}
else
{
sumaDni += 365;
przezyteDni(poczatek,koniec-1);
}
}
else
return sumaDni;
}
int main()
{
int wiek;
printf("Podaj swoj wiek "); scanf("%i",&wiek);

time_t obecnaData;
struct tm*pelnaData;
time(&obecnaData);
pelnaData = localtime(&obecnaData);
int obecnyRok = (pelnaData->tm_year)+1900;

int poczatek = obecnyRok - wiek;
int wyjs = przezyteDni(poczatek,obecnyRok) * 86400;

printf("Suma przezytych sekund: %i\n",wyjs);
return 0;
}
