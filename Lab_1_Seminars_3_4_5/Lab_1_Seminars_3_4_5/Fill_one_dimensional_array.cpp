#include "Libraries.h"
#include "Prototypes.h"

void Fill_array(int *array,int size)
{
	for (int i = 0; i < size; i++) 
	{
		cout << "Enter a[" << i << "] Element of array: ";
		array[i] = Get_number();
	}

	cout << endl;

}