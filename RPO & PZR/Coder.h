#ifndef CODER_H_INCLUDED
#define CODER_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//шифр цезаря immuttable
char* caesarclipherImmut(const char* string, int y)

//шифр цезаря muttable
void caesarclipherMut(char* string, int y)

//шифрование через XOR immuttable
char* XORImmut(const char* string, char* key);

//шифрование через XOR muttable
void XORMut(char* string, char* key)
#endif 