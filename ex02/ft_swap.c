#include <stdio.h>

void ft_swap(int *a, int *b){

    int t = *a;
    *a = *b;
    *b = t;

}
int main(){

    int a = 1;
    int b = 2;
    int *pA = &a;
    int *pB = &b; 
    printf("before swaping :\n");
    printf("%d\n", *pA);
    printf("%d\n", *pB);
    
    ft_swap(pA, pB);
    
    printf("after swaping :\n");
    printf("%d\n", *pA);
    printf("%d\n", *pB);


    return 0;
}