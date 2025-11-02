#include <stdio.h>

int main()
{

    int n, start = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j<=start ; j++){
            printf("*");
        }
        printf("\n");
        start++;
    }
    return 0;
}
