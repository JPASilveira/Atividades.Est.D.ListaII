#include <stdio.h>

struct square {
    double side;
    double area;
    double perimeter;
};

void calculate_square(struct square *s) {
    s->area = s->side * s->side;
    s->perimeter = 4 * s->side;
}

int main() {
    struct square square;
    square.side = 2.0;
    calculate_square(&square);
    printf("%.2lf\n", square.side);
    printf("%.2lf\n", square.area);
    printf("%.2lf\n", square.perimeter);
    return 0;
}