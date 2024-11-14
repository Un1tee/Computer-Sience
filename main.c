#include "function.h"

int main() {
    int** matrix = malloc(ROWS * sizeof(int*));
    for (int i = 0; i < ROWS; i++) {
        matrix[i] = (int*)malloc(COLS * sizeof(int));
    }
    inputMatrix(matrix);

    int result = countUniqueColumns(matrix);
    printf("Unique: %d\n", result);

    return 0;
}
