#pragma once
#include<stdio.h>
#include<stdlib.h>

char hexTchar(int dec, int times);
char charThex(char first, char last);
FILE* open(char fileName[], char type[]);
void read(FILE *fPtr, char str[], int length);
void write(FILE *fPtr, char content[]);
