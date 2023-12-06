#include <stdio.h>
#include <math.h>

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    int largest_square = floor(sqrt(N));
    if (largest_square * largest_square == N) {
        largest_square--;
    }

    int count = largest_square;
    printf("The number of integers less than %d in the sample space S is %d.\n", N, count);

    return 0;
}
