#include "function.h"

int main() {

    int** matrix = malloc(ROW * sizeof(int*));
    for (int i = 0; i < ROW; i++) {
        matrix[i] = (int*)malloc(COLL * sizeof(int));
    }


    inputMatrix(matrix);


    int result = findRowWithMaxIdenticalElements(matrix);
    printf("Number of stroke %d\n", result);

}