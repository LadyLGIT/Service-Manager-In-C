#include <stdio.h>
#include <signal.h>

int main(void) {
    int target_pid = 1234;
    kill(target_pid, 15);
    printf("Sent SIGTERM to %d
", target_pid);
    return 0;
}
