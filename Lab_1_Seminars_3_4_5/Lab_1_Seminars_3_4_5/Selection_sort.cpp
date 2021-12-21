#include "Libraries.h"

int* abs_selection_sort(int* array, int size)
{
	int max;
	int temp;
	int* Psort = new int[size];

	for (int i = 0; i < size; i++)
		Psort[i] = array[i];

	for (int i = 0; i < size; i++)
	{
		max = i;
		for (int j = i + 1; j < size; j++)
		{
			max = (abs(Psort[j]) > abs(Psort[max])) ? j : max;
		}
		if (max != i) 
		{
			temp = Psort[i];
			Psort[i] = Psort[max];
			Psort[max] = temp;
		}
	}

	return Psort;
}