#include <stdio.h>
#include "Point.h"

int main() {
    Point *p = create_point(3.4, 8.9);
    double x;

    if (get_x(p, &x))
        printf("valor de x = %.2f\n", x);
    else
        printf("Erro ao obter x.\n");
    free_point(p);
    return 0;
}