#include "function.h"

void inputMatrix(int** matrix) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Enter[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int countUniqueColumns(int** matrix) {
    int count = 0;

    for (int j = 0; j < COLS; j++) {
        int isUnique = 1;
        for (int i = 0; i < ROWS - 1; i++) {
            for (int k = i + 1; k < ROWS; k++) {
                if (matrix[i][j] == matrix[k][j]) {
                    isUnique = 0;
                    break;
                }
            }
            if (!isUnique) {
                break;
            }
        }
        if (isUnique) {
            count++;
        }
    }

    return count;
}