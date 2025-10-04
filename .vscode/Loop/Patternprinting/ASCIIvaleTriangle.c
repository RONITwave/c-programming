#include <stdio.h>
int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {  // Odd rows - numbers
            for (int j = 1; j <= i; j++) {
                printf("%d", j);
            }
        } else {  // Even rows - letters using ASCII
            for (int j = 1; j <= i; j++) {
                char ch = (char)(64 + j);  // 65 = 'A'
                printf("%c", ch);
            }
        }
        printf("\n");
    }
    return 0;
}
