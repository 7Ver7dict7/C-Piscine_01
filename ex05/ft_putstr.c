#include <stdio.h>
#include <string.h>

void ft_putstr(char *str){

    printf("%s", str);

}
int main(){

    char iHvBigBalls[] = " i have big balls\n";
    char *piHvBigBalls = &iHvBigBalls[1];
    ft_putstr(piHvBigBalls);

    return 0;
}

