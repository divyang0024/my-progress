#include <stdio.h>

int main() {
    printf("divyang\n");
    int num, i = 1;
    printf("Enter any Number:");
    scanf("%d", &num);
    printf("Multiplication table of %d: ", num);
    
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    return 0;
}