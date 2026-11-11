#include <stdio.h>

int main(void) {
    FILE *file = fopen("/tmp/example.pid", "w");
    if (file) {
        fprintf(file, "1234
");
        fclose(file);
        printf("Wrote PID to file
");
    }
    return 0;
}
