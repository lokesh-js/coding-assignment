#include <stdio.h>

int main() {
    int num, sum = 0;
    
    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
        if (num > 0) sum += num;
    } while (num != 0);
    
    printf("Sum of positive integers: %d\n", sum);
    return 0;
}
