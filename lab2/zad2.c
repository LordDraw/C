#include<stdio.h>
main()
{
int kod;
printf("Podaj kod ASCII, ");
scanf("%i",&kod);

printf("Znak kodu nr %i w ASCII to znak %c\n",kod,(char)kod);
}
