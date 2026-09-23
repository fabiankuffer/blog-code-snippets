#ifndef C1_H
#define C1_H

#include <stdint.h>

typedef struct C1 C1;

//Konstruktor und Destruktor
C1* C1_create(void);
void C1_destroy(C1* self);

//öfentliche Methoden
int8_t C1_setV1(C1* const self, int32_t v1);
int8_t C1_getV1(const C1* const self, int32_t* const result);

#endif //C1_H