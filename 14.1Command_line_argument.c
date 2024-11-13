#include <stdio.h>

int main(int argc, char *argv[]) {
    // Loop through each argument
    for (int i = 0; i < argc; i++) {
        printf("Total number of arguments: %d\n",i+1);
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
