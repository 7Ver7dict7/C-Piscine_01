#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b){

    int div, mod;
    int temp1, temp2;

    printf("inside the void : %d\n",*a);
    printf("inside the void : %d\n",*b);


    temp1 = *a / *b;
    temp2 = *a % *b;
    *a = temp1;
    *b = temp2;
   

}
int main(){
    int a = 50;
    int b = 30;
    int *pA = &a;
    int *pB = &b;

    printf("before: \n");
    printf("%d\n", *pA);
    printf("%d\n", *pB);

    ft_ultimate_div_mod(*pA, *pB);

    printf("after:\n");
    printf("%d\n", *pA);
    printf("%d\n", *pB);
    
    return 0;
}