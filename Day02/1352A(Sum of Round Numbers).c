#include <stdio.h>

void decompose(int n) {
    int round_numbers[5];
    int count = 0;
    int multiplier = 1;

    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) {
            round_numbers[count++] = digit * multiplier;
        }
        n /= 10;
        multiplier *= 10;
    }

    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d ", round_numbers[i]);
    }
    printf("\n");
}

int main() {
    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        decompose(n);
    }
    return 0;
}
