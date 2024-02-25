#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){

    *div = a/b;
    *mod = a%b;


}
int main(){
    int result, rest;
    int *pResult = &result;
    int *pRest = &rest;

    ft_div_mod(68, 5, pResult, &rest);

    printf("%d\n", *pResult);
    printf("%d", *pRest);

    return 0;
}