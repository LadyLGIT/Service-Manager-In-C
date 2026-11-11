#include <stdio.h>
#include <signal.h>

int main(void) {
    int target_pid = 9999;
    kill(target_pid, 15);
    printf("example signal %d
", target_pid);
    return 0;
}
