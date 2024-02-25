#include <stdio.h>
#include <string.h>

void ft_sort_inft_strlen(char *str){
   
   int len1 = sizeof(str) / sizeof(str[0]);
    printf("%d\n", len1);
    printf("%lu\n", sizeof(str));
    

}
int main(){



    char string[] = "String";
    char *pChar = &string[0];
    ft_sort_inft_strlen(pChar);


    return 0;
}