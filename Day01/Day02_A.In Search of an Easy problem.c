#include <stdio.h>

int main() {
    int n, response;
    int is_hard = 0; // Flag to check if any response is hard (1)

    // Read the number of people
    scanf("%d", &n);

    // Read each person's response
    for (int i = 0; i < n; i++) {
        scanf("%d", &response);
        if (response == 1) {
            is_hard = 1;
            // No need to check further if we found at least one hard response
            break;
        }
    }

    // Output the result
    if (is_hard) {
        printf("HARD\n");
    } else {
        printf("EASY\n");
    }
    return 0;
}
