#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
char s[10];
gets(s);
    if(strlen(s)>= 10){
        printf("Isso e um palavrao");
    }
    else if(strlen(s)< 10){
        printf("Nao e um palavrao.");
    }
exit(0);
}
