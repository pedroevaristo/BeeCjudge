#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
int x,y;
float z,o,t;
int u,i;


printf("Escreva as coisas do produto 1: ");
scanf("%i %i %f", &x, &y,&z);//codigo, quantid., preço

printf("Digite as coisas do produto 2:  ");
scanf("%i %i %f", &u,&u,&o);

t = ((y * z) + (u * o));

printf("Preco: %.2f", t);
}