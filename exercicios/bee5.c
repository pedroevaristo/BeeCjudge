#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
float a,b,media;

scanf("%f \n %f", &a, &b);

media=(((a*3.5)+(b*7.5))/(3.5+7.5));

printf("%.2f", media);
}