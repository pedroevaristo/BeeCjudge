#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//tendo dificuldade em mexer com funções. 2.3.22
int h(int j);

int main(){
int x,y,g;

    scanf("%d", &g);
    y = h(g);

    printf("%d", y);
}
//t = 0;
int h(int j){
int t;
    t = j * 2;
    return t;
}