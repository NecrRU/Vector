#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H
#include <stdio.h>
#include <stdlib.h>
typedef struct vector {
    int *data; // указатель на элементы вектора
    size_t size; // размер вектора
    size_t capacity; // вместимость вектора
} Vector;


#endif //VECTOR_VECTOR_H
