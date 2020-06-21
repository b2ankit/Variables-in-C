#include<stdio.h>

int increment_var(int x){
    return(++x);
}
int decrement_var(int x){
    return(--x);
}

int main()
{
    int x =5;

    printf("increment value : %d\ndecrement value : %d\n",increment_var(x),decrement_var(x));
    
}