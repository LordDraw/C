/* ******************************************
	Program: countingsort.c na laboratorium Algorytmy i Struktury Danych
	Autor: Pawel Karczewski (Inf II rok st dziennie)
	Komentarze zostaly w wiekszej czesci opatrzone blokowo, poniewaz podczas umieszczenia kodu przez PuTTy komentarze jednolinione wylewaly sie na nastepne linijki.
****************************************** */	

#include <stdio.h>
#define ILOSCLICZB 7
#define MAXWARTOSC 30 /*operacja na malych liczbach, jesli ktorys z elementow tablicy bedzie wiekszy niz 30, pojawi sie blad "naruszenie ochrony pamieci" */

void wczytliczby (int A[]) {
	int i;
	int B[] = {4,9,14,9,29,10,1};
	//char B[] = {'H','E','N','I','U'}; //wersja dla liter z ASCII
	for (i=0;i<ILOSCLICZB;i++) {
		A[i] = B[i]; /*do zadeklarowanej tablicy A podstaw elementy z tablicy B */
	}
}

void showtab(int A[]) {
	int i;
	for (i=0;i<ILOSCLICZB;i++)
	{
		/* ustalanie czy dany element tab jest litera z ASCII czy nie */
		if (A[i]>32 && A[i]<127) {
			printf("%c| ",A[i]); /* pokazanie tablicy jesli element jest litera z ACII */
		}
		else {
			printf("%d| ",A[i]); /* pokazanie tablicy jesli element nie jest litera z ACII */
		}
	}
	printf("\n");
}

void countingsort (int A[],int B[],int k) {
	int C[k]; //tablica C o ilosci k elementow
	int i,j;
	for (i=0;i<k;i++) {
		C[i]=0; //wypelnianie tablicy
	}
	for (j=0;j<ILOSCLICZB;j++) {
		C[*(A+j)] = C[*(A+j)]+1;
	}
	for (i=1;i<k;i++) {
		C[i] = C[i-1] + C[i];
	}
	for (j=(ILOSCLICZB-1);j>=0;j--) {
		*(B+(C[*(A+j)]-1)) = *(A+j);
		C[*(A+j)] = C[*(A+j)]-1;
	}
}

void main () {
	int D[ILOSCLICZB];
	int E[ILOSCLICZB]; 
	wczytliczby(D); /*wykonaj funkcje wczytliczby i elementy umiesc w tablicy D */
	printf("Przed countingsort: ");
	showtab(D); /* pokaz tablice z umieszczonymi elemtami */
	printf("\n");
	countingsort(D,E,MAXWARTOSC); /*wykonaj sortowanie przez zliczanie dla tablicy D, po wykonaniu umiesc wszystkie elementy do tablicy E*/
	printf("Po countingsort: ");
	showtab(E); /*pokaz elementy tablicy po sortowaniu*/
	printf("\n");
	/*return 0; ewentualnie mozna return opatrzyc w komentarz i funkcja main moze stac sie void*/
}

