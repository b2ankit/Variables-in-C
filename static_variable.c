#include<stdio.h>

int increment_var(int x){
    return(++x);
}
int decrement_var(int x){
    return(--x);
}

int main(){

static int x = 10;

    increment_var(x);
    printf("Value of x : %d\nIncrement_var : %d\n",x,increment_var(x));

}