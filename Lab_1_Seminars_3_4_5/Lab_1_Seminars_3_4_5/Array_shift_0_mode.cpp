#include "Libraries.h"

int** Array_shift_0_mode(int** arr, int str, int col, int shift) 
{
    int** pnewArray = arr;
    for (int k = 0; k < shift; k++) 
    {
        for (int i = 0; i < col; i++) 
        {
            int temp = pnewArray[str - 1][i];
            int j;
            for (j = str - 1; j > 0; j--) 
            {
                pnewArray[j][i] = pnewArray[j - 1][i];
            }
            pnewArray[j][i] = temp;
        }
    }
    return pnewArray;
}