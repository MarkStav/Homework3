#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
Описать структуру «прямоугольник», содержащую целочисленные значения длины, ширины,
периметра и площади прямоугольника. Написать функцию, принимающую на вход указатель
на структуру, подсчитывающую и записывающую площадь и периметр данного прямоугольника в структуру.

 */
struct pryamougolnik {
    int height;
    int width;
    int sqare;
    int perimeter;
};
void func(struct pryamougolnik* f){
    f->sqare = f->height * f->width;
    f->perimeter = 2*(f->height + f->width);
}
int main(){
    struct pryamougolnik *f;
    scanf("%d",&f->width);
    scanf("%d",&f->height);
    func(f);
    printf("P = %d \n",f->perimeter);
    printf("S = %d",f->sqare);

    return 0;
}