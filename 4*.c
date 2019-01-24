#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
/**
*Описать структуру «прямая линия», которая должна состоять
 * из длины и двух внутренних структур типа «точка»,
 * в каждой из которых должны содержаться координаты по осям 'х' и 'у'.
 * Описать функцию, принимающую на вход
 * координаты двух точек и возвращающую структуру «линия» с подсчитанной длиной.
 */
struct point{
    int x,y;
};
struct line {
    struct point p1, p2;
    double length;
};
void func(struct line* f){
    f->length = sqrt(pow(f->p1.x - f->p2.x,2) + pow(f->p1.y - f->p2.y,2));
}
int main(){
    struct line *f;
    scanf("%d",&f->p1.x);
    scanf("%d",&f->p1.y);
    scanf("%d",&f->p2.x);
    scanf("%d",&f->p2.y);
    func(f);
    printf("length = %f",f->length);

    return 0;
}
