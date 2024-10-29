#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    float x;
    float y;
    float z;
} Vector;

Vector vector_add(Vector a, Vector b);
Vector vector_sub(Vector a, Vector b);
float vector_dot(Vector a, Vector b);
Vector vector_cross(Vector a, Vector b);

#endif // VECTOR_H