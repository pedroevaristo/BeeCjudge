#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){
int x,y,z,n,m, v[5];

  for(x = 0 ; x < 5; x++){
  scanf("%i", &v[x]);
  }
  y = 0;z = 0;m = 0;n = 0;


  for(x = 0;x < 5; x++){
    
    if(v[x] % 2 == 0){//parte 01
      y++;
      
        if(v[x] < 0){
        m++;
      
        }
           if(v[x] >= 0){
            n++;
      
          }
    }
    
    if(v[x] % 2 == 1){//parte 02
      z++;
      
      if(v[x] < 0){
        m++;
      
        }
           if(v[x] >= 0){
            n++;
      
          }
    }
  
  }

  printf("Par: %i\n", y);
  printf("Impar: %i\n", z);
  printf("N. Negativo: %i\n", m);
  printf("N. Positivo: %i\n", n);

}