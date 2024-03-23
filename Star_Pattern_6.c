#include <stdio.h>

int main(int argc, char const* argv[]) {
    int rows;
    printf("rows:? ");
    scanf("%d", &rows);
    printf("\n");

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <=rows; j++) {
            if ((i+j) <= rows) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
