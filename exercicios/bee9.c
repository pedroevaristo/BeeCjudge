#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
char n[20];
float x,y,t,t1;

printf("Nome: ");
gets(n);

printf("Total de vendas: ");
scanf("%f", &x);

printf("Salario mensal: ");/*pega o total e dividi pela por certagem de ganho.*/
scanf("%f", &y);

t = x + (y * 0.15);


printf("O valor total do salario: %.2f", t);
}