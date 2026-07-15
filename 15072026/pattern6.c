#include <stdio.h>
int main() {
    int n, repeat, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter number of repetitions: ");
    scanf("%d", &repeat);
    for (int r = 1; r <= repeat; r++) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j < i; j++)
                printf(" ");
            printf("%d\n", i);
        }
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n - i; j++)
                printf(" ");
            printf("%d\n", i);
        }
    }
    return 0;
}
