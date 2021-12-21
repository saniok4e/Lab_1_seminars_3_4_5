#include "Libraries.h"

void Output_two_dimensional_array(int** array, int str, int col) 
{
	for (int i = 0; i < str; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			cout << "[" << array[i][j] << "]\t";
		}
		cout << endl;
	}
}