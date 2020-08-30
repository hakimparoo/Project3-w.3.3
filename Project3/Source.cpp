#include <stdio.h>
int main() {
    int  x;
    scanf_s("%d", &x);
    for (int i = x; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            printf_s("%d ", j);
        }
        printf_s("\n");
    }
    return 0;
}