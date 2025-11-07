#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);


    for (int i = 1; i <= N; i++) {
        int spaces = N - i;
        for (int s = 0; s < spaces; s++) {
            printf(" ");
        }
        int symbols = (2 * i) - 1;
        char ch = (i % 2 == 1) ? '#' : '-';
        for (int j = 0; j < symbols; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    for (int i = N - 1; i >= 1; i--) {
        int spaces = N - i;
        for (int s = 0; s < spaces; s++) {
            printf(" ");
        }
        int symbols = (2 * i) - 1;
        char ch = (i % 2 == 1) ? '#' : '-';
        for (int j = 0; j < symbols; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
