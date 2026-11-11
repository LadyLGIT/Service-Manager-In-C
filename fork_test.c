#include <stdio.h>
#include <unistd.h>

int main(void) {
    pid_t pid = fork();
    if (pid == 0) {
        printf("I am the child process ");
    } else if (pid > 0) {
        printf("I am the parent process ");
    }
    return 0;
}
