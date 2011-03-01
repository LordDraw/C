#include <stdio.h>
#define ILE 3
main()
{
float tab[ILE], x;
int k, m, n,suma,iloczyn;
printf("Wprowad¼ trzy liczby ca³kowite: ");
scanf ("%d %d %d"&k&m&n);
suma=k+m+n;
printf("Suma wynosi: %d",suma);
iloczyn=k*m*n;
printf("Iloczyn wynosi: %d",iloczyn);
  for (k=0; k<ILE; k=k+1)
    scanf("%f", &tab[k]);

  n=ILE;
  while (n>1) {
    m=1;
    for (k=1; k<n; k=k+1)
      if (tab[k-1] > tab[k]) {
        x=tab[k-1]; tab[k-1]=tab[k]; tab[k]=x;
        m=k;
      }
    n=m;
  }
  for (k=0; k<ILE; k=k+1){
	printf("najmniejsza liczba to: \n", tab[0]);
    printf(" najwieksza liczba to:" \n, tab[2]);
return 0;
	}

}
