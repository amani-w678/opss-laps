
// do while

#include <stdio.h>

int main() {
    int sum = 0, i = 2;

    printf("Using do-while loop:\n");
    do {
        sum += i;
        printf("Adding %d, Current Sum: %d\n", i, sum);
        i += 2;
    } while (i <= 100);

    printf("Total Sum: %d\n", sum);
    return 0;
}