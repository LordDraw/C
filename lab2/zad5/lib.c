#include<stdio.h>
#include<string.h>

double pobierz(char *prompt)
{
    double n;
    printf(prompt);
    scanf("%lf", &n);
    return n;
}

int pobierz_miara(char *prompt)
{
    int n;
    char miara[2];
    printf(prompt);
    scanf("%s", miara);
    if (strcmp("cm", miara) == 0) {
n = 1;
    } else if (strcmp("in", miara) == 0) {
n = 2;
    }
    return n;
}


void wypisz(double a, int n)
{
    if (n == 1) {
printf("twoj wzrost to %.2f in \n", a / 2.54);
    } else if (n == 2) {
printf("twoj wzrost to %.2f cm \n", a * 2.54);
    }
}
