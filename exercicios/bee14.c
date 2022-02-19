#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
int x;
float y,t;
scanf("%i %f", &x, &y);//Km total e litro do combustivel usado

t=x/y;
printf("%.3f", t);
}
