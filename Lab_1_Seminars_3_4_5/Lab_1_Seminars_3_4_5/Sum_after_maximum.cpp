#include "Libraries.h"
int Sum_after_maximum(int* array, int size, int maximum_index) 
{
	int Sum;
	if ((size - (maximum_index + 1) <= 1))
	{
		cout << "Sum can't be founded\n";
	}
	else 
	{
		Sum = array[maximum_index + 1];
		for(int i = maximum_index+2;i < size; i++)
		{
			Sum += array[i];
		}
		cout << "Sum: " << Sum;
		return Sum;
	}
	return 0;
}