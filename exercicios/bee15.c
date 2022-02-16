#include<stdio.h>
#include<stdlib.h>
#include<math.h.>
#include<locale.h>

int main(){/*Interessante colocar função nesta questão:*/
float x,y,t, T;
float x1,y1,t1;
scanf("%f %f", &x, &y);
scanf("%f %f", &x1,&y1);
t =(x1-x);
t = pow(t,2);

t1 = (y1-y);
t1 = pow(t1,2);

T = t + t1;

T = sqrt(T);

printf("%.4f", T);
}