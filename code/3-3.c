#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_str(const void *a, const void *b) {
    return (int)*(const char *)((int)a) - (int)*(const char *)((int)b);
}

int main(void) {
    const char *words[] = {"banana", "apple", "ant", "orange"};
    int size = 4;

    qsort(words, size, sizeof(const char *), cmp_str);

    for(int i=0; i <size; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}