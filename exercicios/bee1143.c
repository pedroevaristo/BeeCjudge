#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
int c,m,n,t,t1,k;// linhaxcoluna
    scanf("%i", &c);
int v[c][3];
    t = 0;
for(m = 1;m <= c; m++){
    for(n = 1; n <= 3; n++){
        t = pow(m,2);
        t1 = t * m;
        
      printf("v[%i] [%i] = %i - %d\n",m,n, t, t1);
      
    }
}
}
