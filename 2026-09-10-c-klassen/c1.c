#include "c1.h"

#include <stdlib.h>
#include <stdbool.h>

/*----------------------
private Membervariablen
----------------------*/

struct C1
{
    int32_t v1;
};

/*----------------------
Konstruktor
----------------------*/
C1* C1_create(void)
{
    C1* self = malloc(sizeof(C1));

    if (self == NULL)
    {
        return NULL;
    }

    self->v1 = 0;

    return self;
}

/*----------------------
Destruktor
----------------------*/
void C1_destroy(C1* self)
{
    free(self);
}

/*----------------------
private Methoden
----------------------*/
static int8_t C1_V1Valid(int32_t val, bool* const result)
{
    if (result == NULL)
    {
        return -1;
    }

    *result = val > 100;

    return 0;
}

/*----------------------
öffentliche Methoden
----------------------*/
int8_t C1_setV1(C1* const self, int32_t v1)
{
    if(self == NULL)
    {
        return -1;
    }

    bool v1Valid;
    int8_t status = C1_V1Valid(v1, &v1Valid);

    if (status != 0 || !v1Valid)
    {
        return -2;
    }

    self->v1 = v1;

    return 0;
}

int8_t C1_getV1(const C1* const self, int32_t* const result)
{
    if (self == NULL || result == NULL)
    {
        return -1;
    }

    *result = self->v1;

    return 0;
}