// for loop
#include <stdio.h>

int main() {
    int sum = 0;

    printf("Using for loop:\n");
    for (int i = 2; i <= 100; i += 2) {
        sum += i;
        printf("Adding %d, Current Sum: %d\n", i, sum);
    }

    printf("Total Sum: %d\n", sum);
    return 0;
}


