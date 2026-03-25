#ifndef MAIN_H
#define MAIN_H
#define _DEFAULT_SOURCE
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Each person has two parents and two alleles
typedef struct person
{
    struct person *parents[2];
    char alleles[2];
} person;

extern int GENERATIONS;
extern int INDENT_LENGTH;

person *create_family(int generations);
void print_family(person *p, int generation);
void free_family(person *p);
char random_allele();
#endif // !ΜΑΙΝ Η