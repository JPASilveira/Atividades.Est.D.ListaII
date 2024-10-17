#include <stdio.h>

// function passed by the exercise
void imprime (char *v, int n) {
    char *c;
    for (c = v; c < v + n; c++){
        printf ("%c", *c);
    }
}

int main() {
    char *v = "Hello World!";
    imprime (v,12);
}