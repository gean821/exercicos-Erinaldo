#include<stdio.h>
#include<locale.h>
//a�a um programa que receba tr�s notas, calcule e
//mostre a m�dia aritm�tica.
int main(void) {
int nota1,nota2,nota3;
float media;
printf("insira tr�s notas : ");
scanf("%d %d %d", &nota1, &nota2, &nota3);
media= (nota1+nota2+nota3) / 3;
printf("A m�dia aritm�tica das 3 notas � %f : ", media);
}
