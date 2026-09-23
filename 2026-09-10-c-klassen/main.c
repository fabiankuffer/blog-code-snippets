
#include "c1.h"

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    C1* object1 = C1_create();
    C1* object2 = C1_create();

    if (object1 == NULL || object2 == NULL)
    {
        C1_destroy(object1);
        C1_destroy(object2);
        return -1;
    }

    C1_setV1(object1, 150);
    C1_setV1(object2, 250);

    int32_t value1 = 0;
    int32_t value2 = 0;

    C1_getV1(object1, &value1);
    C1_getV1(object2, &value2);

    printf("Objekt 1: %ld\n", (long)value1);
    printf("Objekt 2: %ld\n", (long)value2);

    C1_destroy(object1);
    C1_destroy(object2);

    return 0;
}