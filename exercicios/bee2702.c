#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
int b,c,p, br,cr,pr;
int t, x,a, R;

scanf("%d%d%d %d%d%d", &b,&c,&p, &br,&cr,&pr);

  x = 0;
  if(br > b){
    x = br - b;
  }
  t = 0;
  if(cr > c){
    t = cr - c;
  }
  a = 0;
  if(pr > p){
    a = pr - p;

  }
R = t + a + x;

printf("\n%i", R);
}
