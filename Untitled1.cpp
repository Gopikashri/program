#include <stdio.h>

int main() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    if (n > 0) {
        printf("The number is positive.\n");
    } else if (n < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    return 0;
}
