#include "Libraries.h"
int Show_indexes_of_maximums(int* array, int size, int maximum) 
{
	int count = 0;
	cout << "Indexes of maximums: ";
	for (int i = 0; i < size; i++) 
	{
		if (array[i] == maximum) {
			cout << "[" << i << "]" << " ";
			count++;
		}
	}
	cout << endl;
	return count;
}