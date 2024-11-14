#include "function.h"


void inputMatrix(int** matrix) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLL; j++) {
            printf("Enter number for matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}


int findRowWithMaxIdenticalElements(int** matrix) {
    int maxCount = 0;
    int rowIndex = -1;

    for (int i = 0; i < ROW; i++) {
        int currentCount = 0;
        for (int j = 1; j < COLL; j++) {
            for (int k = j + 1; k < COLL; k++) {
                if (matrix[i][j] == matrix[i][k]) {
                    currentCount++;
                }
            }
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            rowIndex = i;
        }
    }

    return rowIndex;
}


