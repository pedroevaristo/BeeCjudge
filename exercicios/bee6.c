#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
float a,b,c,t;

scanf("%f \n %f \n %f", &a,&b,&c);
t=(((a*2)+(b*3)+(c*5))/(2+3+5));

printf("%.2f", t);
}