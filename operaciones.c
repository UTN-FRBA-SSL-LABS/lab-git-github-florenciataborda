#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b; //mal aproposito
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/*Multiplicar dos enteros a y b*/
/*Calcula el producto de dos enteros a y b utilizando el operador de mulitplicacion*/
/*Este procedimiento tiene como finalidad calcular el producto de dos números enteros, denominados a y b, haciendo uso del operador aritmético de multiplicación... No pueden ser char, porque son Int */
int multiplicar(int a, int b) {
   
    return a * b; /* TODO: implementar */
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0; /* version main */
}
