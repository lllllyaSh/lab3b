#pragma once
#include <string.h>

char *read_line();

int readint(int *a);
char* readword(char* s, int* position);
int readPositive(int *a);
int* readArray(int n);
int* readArray(int n);
int FilenameIsValid(char* name);

void printArray(int* arr, int n);
void printArrayFloat(float* arr, int n);
