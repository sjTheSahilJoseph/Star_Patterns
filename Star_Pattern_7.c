#include <stdio.h>

void print_star_pattern(unsigned int rows);

int main(int argc, char const* argv[]) {
    unsigned int rows;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("\n");

    print_star_pattern(rows);
    return 0;
}

void print_star_pattern(unsigned int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d", i+1);
        }
        printf("\n");
    }
}
