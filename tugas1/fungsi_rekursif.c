#include <stdio.h>

int faktorial(int n) {
    if (n == 0) return 1;
    return n * faktorial(n - 1);
}

int main() {
    printf("5! = %d\n", faktorial(5));
    return 0;
}
