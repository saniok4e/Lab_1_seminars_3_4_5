#include "Libraries.h"

void Output_one_dimensional_array(int* array, int size)
{
	for (int i = 0; i < size; i++) 
	{
		cout << "a[" << i << "] Element of array is ";
		cout << array[i] << endl;
	}

	cout << endl << endl;

}