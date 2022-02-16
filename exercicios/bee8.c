#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
int nc;
char n[20];
float t, r, m;
   
printf("Digite seu nome: \n");
    gets(n);

printf("Seu codigo do funcionario: \n");
    scanf("%i", &nc);


printf("Hora trabalhada em 1 mes:");
    scanf("%f", &m);

printf("Quanto recebe por hora? \n");
    scanf("%f", &r);

    t = (m * r);

puts(n);
printf("%i \n", nc);
printf("%.2f", t);
}