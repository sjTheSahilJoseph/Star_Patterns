#include <stdio.h>

void print_star_pattern(int number) {
    for (int i = number; i >= 1; i--) {
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
