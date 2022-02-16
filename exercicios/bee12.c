#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
float a,b,c, t, t1, t2, t3, t4, pi = 3.14159;//os lados

scanf("%f %f %f", &a, &b, &c);

t = ((a * c)/2);
printf("Triangulo: %f \n", t);

t1 = (pi * (pow(c,2)));
printf("Circunferencia: %.3f\n", t1);

t2 = ((a+b)*c)/2;
printf("Trapezio: %.3f\n", t2);

t3 = pow(b,2);
printf("Quadrado = %.2f\n", t3);

t4 = (a * b);
printf("Retangulo = %.2f\n", t4);
}