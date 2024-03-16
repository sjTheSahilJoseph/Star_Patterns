#include <stdio.h>

void print_star_pattern(int number) {
    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main(int argc, char const* argv[]) {
    print_star_pattern(10);
    return 0;
}
