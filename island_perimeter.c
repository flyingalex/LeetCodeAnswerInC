#include <stdlib.h>
#include <stdio.h>

int islandPerimeter(int** grid, int gridRowSize, int gridColSize);
int translate_pointer_to_int(int ** grid, int colSize, int rowSize, int gridRowSize);

int main(int argc, char ** argv)
{
    int grid[4][4] = {
        {0,1,0,0},
        {1,1,1,0},
        {0,1,0,0},
        {1,1,0,0},
    };
    
    int result = islandPerimeter(grid, 4, 4);
    printf("%d\n", result);
    return 0;
}

int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    int count = 0;
    for (int i = 0; i < gridColSize; i++) {
        for (int j = 0; j < gridRowSize; j++) {
            if (translate_pointer_to_int(grid, gridRowSize, i, j) == 1) {
                count += 4;
                if (translate_pointer_to_int(grid, gridRowSize, i+1, j) == 1) {
                    count -= 1;
                }
                if (translate_pointer_to_int(grid, gridRowSize, i-1, j) == 1) {
                    count -= 1;
                }
                if (translate_pointer_to_int(grid, gridRowSize, i, j-1) == 1) {
                    count -= 1;
                }
                if (translate_pointer_to_int(grid, gridRowSize, i, j+1) == 1) {
                    count -= 1;
                }
            }
        }
    }
    return count;
}

int translate_pointer_to_int(int ** grid, int gridRowSize, int colSize, int rowSize)
{
    return *((int *)grid + colSize*gridRowSize + rowSize);
}
