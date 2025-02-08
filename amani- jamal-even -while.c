// while loop

#include <stdio.h>

int main() {
    int sum = 0, i = 2;

    printf("Using while loop:\n");
    while (i <= 100) {
        sum += i;
        printf("Adding %d, Current Sum: %d\n", i, sum);
        i += 2;
    }

    printf("Total Sum: %d\n", sum);
    return 0;
}
