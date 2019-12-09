#include <stddef.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>

#define RATE (10)

void *malloc(size_t size)
{
    static int first = true;

    if (first) {
        srand(time(NULL));
        first = false;
    }
    return rand() % 100 < RATE ? NULL : sbrk(size);
}
