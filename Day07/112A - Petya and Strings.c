#include <stdio.h>
#include <ctype.h> // tolower() এর জন্য
#include <string.h>

int main() {
    char s1[101], s2[101];
    scanf("%s %s", s1, s2);

    for(int i = 0; i < strlen(s1); i++) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);

        if(c1 < c2) {
            printf("-1");
            return 0;
        }
        if(c1 > c2) {
            printf("1");
            return 0;
        }
    }

    printf("0");
    return 0;
}
