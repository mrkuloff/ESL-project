#include <stdio.h>
#include "vector.h"

int main() {
    Vector v1 = {1.0f, 2.0f, 3.0f};
    Vector v2 = {4.0f, 5.0f, 6.0f};

    Vector sum = vector_add(v1, v2);
    Vector diff = vector_sub(v1, v2);
    float dot = vector_dot(v1, v2);
    Vector cross = vector_cross(v1, v2);

    printf("Sum: (%.2f, %.2f, %.2f)\n", sum.x, sum.y, sum.z);
    printf("Difference: (%.2f, %.2f, %.2f)\n", diff.x, diff.y, diff.z);
    printf("Dot Product: %.2f\n", dot);
    printf("Cross Product: (%.2f, %.2f, %.2f)\n", cross.x, cross.y, cross.z);

    return 0;
}
