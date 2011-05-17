#include <stdio.h>

int main() {
  int t[4] = { 2, 8, 1, 3 }, 
    int a[4] = { 0, 1, 2,3 }; //druga tablica
  int i, j;

  for (i = 0; i < 4; i++){
    printf("%d ", t[i]); //podstawianie do tablicy t

}
  printf("\n");

  for (i = 0; i < 4; i++){
 for (j=i+1; j < 4; j++){
      if (t[i] > t[j]) {
int temp;
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
for (i = 0; i < 4; i++) {
printf("%d ", a[i]);
    }

    printf("\n");

    for (i = 0; i < 4; i++) {
      printf("%d ", t[a[i]]); //sortowanie danych
    }


    printf("\n");
    return 0;
}
