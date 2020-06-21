#include<stdio.h>

int local_var(){
    int x =5;
    return(x);
}

int main(){

    int x = 10;
    printf("Local_var x: %d\nVariable x : %d\n",local_var(),x);
    return 0;
}