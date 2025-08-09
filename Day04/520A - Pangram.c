#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int n;
    char str[101];
    int letters[26] = {0}; // To track presence of each letter (a-z)
    int count = 0;

    // Read input
    scanf("%d", &n);
    scanf("%100s", str); // Read up to 100 characters to prevent buffer overflow

    // Process each character in the string
    for (int i = 0; i < n; i++) {
        char c = tolower(str[i]); // Convert to lowercase
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            if (letters[index] == 0) {
                letters[index] = 1;
                count++;
                // Early exit if we've found all letters
                if (count == 26) {
                    break;
                }
            }
        }
    }

    // Check if all letters were found
    if (count == 26) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
