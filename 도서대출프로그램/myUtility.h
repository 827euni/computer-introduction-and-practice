#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char clean;

void myFlush();
int fileWriter(void* _Dest, size_t Size, int _Count, char* fileName);
int fileReader(void* _Dest, size_t Size, int _Count, char* fileName);