#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
Написать функцию-обёртку, возвращающую указатель на область памяти,
которую затем можно использовать как массив из элементов типа integer.
Количество элементов указывается в аргументе функции. Массив должен быть гарантированно инициализирован нулями. Для проверки
заполните этот массив и выведите на экран.
 */
int* func(int N){
    int *area = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i<N; i++) *(area + i) = 0;
    return area;
}
int main(){
    int N;
    int *area;
    scanf("%d",&N);
    area = func(N);
    for (int i = 0; i<N; i++) printf("%d",*(area + i));
    return 0;
}