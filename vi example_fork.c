#include <stdio.h>
#include <unistd.h>

int main(void) {
    pid_t pid = fork();
    if (pid == 0) {
        printf("example child
");
    } else if (pid > 0) {
        printf("example parent
");
    }
    return 0;
}
