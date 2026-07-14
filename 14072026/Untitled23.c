// sum of series 1-x2/2!+...
#include <stdio.h>

int main() {
    double x, sum = 1.0, term = 1.0;
    int n, i;
    printf("Enter the value of X: ");
    if (scanf("%lf", &x) != 1) {
        printf("Invalid input for X.\n");
        return 1;
    }
    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for number of terms.\n");
        return 1;
    }
    for (i = 1; i < n; i++) {
        term = -term * x * x / ((2 * i) * (2 * i - 1));
        sum += term;
    }
    printf("\nSum of the series up to %d terms = %.6lf\n", n, sum);

    return 0;
}
