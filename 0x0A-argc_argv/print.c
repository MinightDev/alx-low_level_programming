#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, sum = 0;

    if (argc == 1) {
        printf("0\n");
    } else {
        for (i = 1; i < argc; i++) {
            int j = 0;
            while (argv[i][j] != '\0') {
                if (!(argv[i][j] >= '0' && argv[i][j] <= '9')) {
                    printf("Error\n");
                    return 1;
                }
                j++;
            }
            sum += atoi(argv[i]);
        }
        printf("%d\n", sum);
    }

    return 0;
}
              
