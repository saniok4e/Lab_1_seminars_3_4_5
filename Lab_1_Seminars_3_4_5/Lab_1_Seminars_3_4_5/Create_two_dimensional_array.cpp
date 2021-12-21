#include "Libraries.h"
#include "Prototypes.h"
int** Create_two_dimensional_array(int str,int col) 
{
	int** A;

	A = new int* [str];

	for (int i = 0; i < str; i++) {
		A[i] = new int[col];
	}

	return A;
}