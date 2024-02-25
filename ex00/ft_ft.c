#include <stdio.h>

void ft_ft(int *pnbr){
    *pnbr = 42;
    
}
int main(){

    int a;
    int *p_a = &a;
    ft_ft(&a);
    printf("%d", *p_a);

    /*
    OR:

    int a;
    int *p_a = &a;
    ft_ft(p_a);
    printf("%d", *p_a);
    */
   return 0;


}