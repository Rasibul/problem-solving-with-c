#include <stdio.h>

void third(int x) {
    int c = x + 3;         
    printf("Inside third: c=%d\n", c);
}

void second(int y) {
    int b = y + 2;
    third(b);
    printf("Back in second: b=%d\n", b);
}

void first() {
    int a = 1;
    second(a);
    printf("Back in first: a=%d\n", a);
}

int main() {
    first();
    return 0;
}