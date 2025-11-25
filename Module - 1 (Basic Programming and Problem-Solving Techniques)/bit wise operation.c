#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    N = N | (1 << 0);
    N = N & ~(1 << 1);
    N = N ^ (1 << 2);
    printf("%d\n", N);
}
