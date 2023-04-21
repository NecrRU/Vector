#include "Vector.h"

Vector createVector(size_t n) {
    Vector v;
    v.size = (size_t) 0;
    v.capacity = (size_t) n;

    v.data = malloc(n * sizeof(int));
    return v;
}

void reserve(Vector *v, size_t newCapacity) {
    if (newCapacity == 0) {
        free(v->data);
        v->data = NULL;
        return;
    }
    v->size = v->size > newCapacity ? newCapacity : v->size;

    v->data = realloc(v->data, newCapacity);
    v->capacity = newCapacity;
}

void clear(Vector *v) {
    *v = createVector(v->capacity);
}

void shrinkToFit(Vector *v) {
    reserve(v, v->size);
}

void deleteVector(Vector *v) {
    free(v);

}

int main() {
    Vector v = createVector(6);
    free(v.data);
    printf("%d", v.data);
    return 0;
}