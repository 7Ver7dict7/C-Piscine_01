#include <stdio.h>

void ft_ultimate_ft(int *********nbr){
    *********nbr = 42;

}
int main(){

    int a;
    int *pA = &a;
    int **pA2 = &pA;
    int ***pA3 = &pA2;
    int ****pA4 = &pA3;
    int *****pA5 = &pA4; 
    int ******pA6 = &pA5;
    int *******pA7 = &pA6;
    int ********pA8 = &pA7;
    int *********pA9 = &pA8;

    ft_ultimate_ft(pA9);
    printf("%d\n", *********pA9);
    printf("%d\n", a);
}