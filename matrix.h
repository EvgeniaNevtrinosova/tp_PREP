#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <stdio.h>

typedef struct Matrix {
    //TODO
} Matrix;

Matrix* create_matrix_from_file(FILE* file);
Matrix* create_matrix(int row, int col);
void free_matrix(Matrix* matrix);
double get_elem(Matrix* matrix, int row, int col);
void set_elem(Matrix* matrix, int row, int col, int val);

#endif //_MATRIX_H_
