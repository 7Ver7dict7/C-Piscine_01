#include <stdio.h>


void ft_rev_int_tab(int *tab, int size){

    printf("%d\n", tab[1]);
    printf("%d\n", tab[1]);
    printf("%d\n", tab[2]);
    printf("%d\n", tab[3]);
    printf("%d\n", tab[4]);
    printf("%d\n", tab[5]);

    //for(int i = size; i>0; i--){
   //     printf("%d", tab[i]);
   // }

}
int main(){

    int a = 1, b =2, c = 3, size = 6;
    int Array[6] = {a, b, c};
    int *pArray[1] = Array[1];

    printf("!!!%d\n", Array[1]);
    











    //printf("!!!%d\n", *ptrArray[0]);
    //printf("%d\n", *ptrArray[1]);
    //printf("%d\n", *ptrArray[2]);
    //printf("%d\n", *ptrArray[3]);
    //printf("%d\n", *ptrArray[4]);  
    //printf("%d!!!\n", *ptrArray[5]);

    //printf("%d!!!\n", *pArray[5]);
    //ft_rev_int_tab(*ptrArray, size);
    
    return 0;
}