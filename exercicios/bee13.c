#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
int x,y,z,t;
scanf("%i\n%i\n%i",&x,&y,&z);

t =((x + y + abs(x-y))/2);
t =((z + t + abs(z-t))/2);

printf("\n\n%i", t);

}