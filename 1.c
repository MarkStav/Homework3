#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *Описать функцию, возвращающую строку с двоичным представлением
 * десятичного числа, переданного в аргументе этой функции.
 */
char* func(int N){
    char *dva = malloc(sizeof(char)*33);
    char s[33];
    int i = 0;
    while (N > 0){
        s[i] = (N % 2 == 1 ?'1':'0');
        i++;
        N /= 2;
    }
    s[i] = (char)0;
    int len = strlen(s);

    dva[len] = '\0';
    i = 0;
    while (s[i]) { dva[len- i -1] = s[i]; i++; }

    return dva;
}
int main(){
    int N;
    scanf("%d",&N);
    printf(func(N));
    return 0;
}