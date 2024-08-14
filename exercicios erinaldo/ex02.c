#include<stdio.h>
#include<locale.h>
//aça um programa que receba três notas, calcule e
//mostre a média aritmética.
int main(void) {
int nota1,nota2,nota3;
float media;
printf("insira três notas : ");
scanf("%d %d %d", &nota1, &nota2, &nota3);
media= (nota1+nota2+nota3) / 3;
printf("A média aritmética das 3 notas é %f : ", media);
}
