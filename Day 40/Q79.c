/* Q79 (2D Arrays)
Perform diagonal traversal of a matrix. */

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter matrix dimensions (rows cols): ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int totalDiagonals = rows + cols - 1;

    for (int d = 0; d < totalDiagonals; d++) {
        int temp[(rows < cols ? rows : cols)], k = 0;

        // Collect elements on this diagonal
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (i + j == d) {
                    temp[k++] = mat[i][j];
                }
            }
        }

        // Print in reverse for even diagonals
        if (d % 2 == 0) {
            for (int x = k - 1; x >= 0; x--) {
                printf("%d ", temp[x]);
            }
        } else {
            for (int x = 0; x < k; x++) {
                printf("%d ", temp[x]);
            }
        }
        printf("\n");
    }

    return 0;
}