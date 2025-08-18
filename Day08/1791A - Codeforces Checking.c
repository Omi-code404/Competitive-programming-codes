#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char c;
        scanf(" %c", &c);
        if (c == 'c' || c == 'o' || c == 'd' || c == 'e' ||
            c == 'f' || c == 'o' || c == 'r' || c == 'c' ||
            c == 'e' || c == 's') {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
