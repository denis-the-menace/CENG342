#include <stdio.h>
#include <stdlib.h>

double randomDoubleGenerator(double lower_bound, double upper_bound) {
  double range = (upper_bound - lower_bound);
  double div = RAND_MAX / range;
  return lower_bound + (rand() / div);
}

void randomMatrixMultiplication(int rows, int cols, char *file_name) {
  FILE *fptr = fopen(file_name, "w");

  double(*arr)[cols] = malloc(sizeof(double[rows][cols]));
  double *vector = malloc(sizeof(double[cols]));

  srand((unsigned int)20050111060);

  fprintf(fptr, "Random matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      arr[i][j] = randomDoubleGenerator(1.0, 100.0);
      fprintf(fptr, "%f  ", arr[i][j]);
    }
    fprintf(fptr, "\n");
  }

  fprintf(fptr, "\nRandom vector:\n");
  for (int i = 0; i < cols; i++) {
    vector[i] = randomDoubleGenerator(1.0, 100.0);
    fprintf(fptr, "%f  ", vector[i]);
  }

  fprintf(fptr, "\n\nMultiplication:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      arr[i][j] *= vector[j];
      fprintf(fptr, "%f  ", arr[i][j]);
    }
    fprintf(fptr, "\n");
  }

  free(*arr);
  free(vector);
  fclose(fptr);
}
