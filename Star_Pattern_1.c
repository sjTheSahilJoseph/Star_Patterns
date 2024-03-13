# include <stdio.h>

int main(int argc, char const* argv[]) {
    int lines = 0;

    printf("How many lines? : ");
    scanf("%d", &lines);
    printf("\n");

    for (size_t i = 1; i <= lines; i++) {
        for (size_t j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
