#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
const int kml = 12;

int main(){
float x,y,t;// horas, distância. EM sequencia
printf("Digite as horas e a distancia: \n");
scanf("%f %f", &x,&y);
t = ((y / kml) * x);
printf("%.3f", t);
}
