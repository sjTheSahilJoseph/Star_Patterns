/*
    Author: SJ
    Date: 14 March 2024
*/

# include <stdio.h>

int main(int argc, char const* argv[]) {
    int lines = 5;

    // Method 1
    for (int i = 1; i <= lines; i++) {
        for (int j = lines; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }

    // Medhod 2
    for (int i = lines; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
