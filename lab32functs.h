/** lab32functs.h
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 33
* ===========================================================  */

#ifndef LAB32FUNCTS_H
#define LAB32FUNCTS_H

#include <stdio.h>

int factorial(int N);

int tail_factorial(int N, int accum);

double calculateDecayDuration(int N, double halflifeInYears, double accum);

int collatz(int N, int accum);

#endif 
