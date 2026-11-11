#include <stdio.h>

int main(void) {
    FILE *file = fopen("/tmp/example.pid", "w");
    if (file) {
        fprintf(file, "9999
");
        fclose(file);
        printf("example write
");
    }
    return 0;
}
