#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
int r;
double pi = 3.14159, t;

printf("Digite o valor do raio: ");
scanf("%i", &r);

t = ((pow(r,3)*pi*4)/3);

printf("%f", t);
}