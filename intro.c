#include<stdio.h>
#include<stdlib.h>
void fun(int *p){
int q = 5;
p = &q;
} 

int main(){
int r = 10;
int *p = &r;
fun(p);
printf("%d", *p);
return 0;
}