#include <stdio.h>

int main() {
    int n, i, maxPos = 0, minPos = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > a[maxPos]) maxPos = i;
        if (a[i] <= a[minPos]) minPos = i;
    }
    int swaps = maxPos + (n - 1 - minPos);
    if (maxPos > minPos) swaps--;
    printf("%d\n", swaps);
    return 0;
}
