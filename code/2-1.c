#include <stdio.h>

enum State { IDLE, RUNNING, PAUSED, DONE};

void print_state(enum State s) {
    switch (s)
    {
    case IDLE:
        printf("State: IDLS\n");
        break;
    case RUNNING:
        printf("State: RUNNING\n");
    default: printf("Unknown state\n");
    }
}

int main(void) {
    print_state(RUNNING);
    return 0;
}