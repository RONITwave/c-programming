#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            // Odd row: print numbers 1 to i
            for (int j = 1; j <= i; j++) {
                printf("%d", j);
            }
        } else {
            // Even row: print letters A to (A + i - 1)
            for (char ch = 'A'; ch < 'A' + i; ch++) {
                printf("%c", ch);
            }
        }
        printf("\n");
    }

    return 0;
}
