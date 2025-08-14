#include <stdio.h>

int main() {
    int t, k;
    scanf("%d", &t);
    while (t--) {  // t=3 → t=2 → t=1 → t=0 (স্টপ)
        scanf("%d", &k);
        int num = 0;
        while (k > 0) {
            num++;
            if (num % 3 == 0 || num % 10 == 3) continue;
            k--;
        }
        printf("%d\n", num);
    }
    return 0;
}
