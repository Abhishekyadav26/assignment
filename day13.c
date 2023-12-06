#include <stdio.h>
#include <math.h>

int main() {
    int A, B, K;
    printf("Enter two numbers A and B: ");
    scanf("%d %d", &A, &B);
    printf("Enter the value of K: ");
    scanf("%d", &K);

    double AB = pow(A, B);
    char str[100];
    sprintf(str, "%.0f", AB);

    int len = strlen(str);
    int kth_digit = str[len - K] - '0';

    printf("The %dth digit from the right of %d^%d is %d.\n", K, A, B, kth_digit);

    return 0;
}
