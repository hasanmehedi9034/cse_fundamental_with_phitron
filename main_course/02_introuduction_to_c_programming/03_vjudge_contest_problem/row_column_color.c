#include <stdio.h>

int main() {
    
    int row, column, picked_row, picked_column;

    scanf("%d %d", &row, &column);
    scanf("%d %d", &picked_row, &picked_column);

    int totol_cells = row * column;
    int remaiined_coloumn = column - picked_column;

    int colored_row = picked_row * remaiined_coloumn;

    int colored_column = picked_column * row;

    int uncolored_cell = totol_cells - (colored_row + colored_column);

    printf("%d\n", uncolored_cell);


    return 0;
}