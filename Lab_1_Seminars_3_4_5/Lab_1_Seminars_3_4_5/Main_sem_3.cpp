#include "Libraries.h"
#include "Prototypes.h"
int Main_Sem_3() 
{
	int * array = NULL;
	int size;
	const int max_array_elements = 50;

	size = Get_size_of_array(max_array_elements);
	system("cls");
	array = Create_one_dimensional_array(size);
	Fill_array(array,size);
	system("cls");

	cout << "Your current array: \n";
	Output_one_dimensional_array(array, size);
	Sem_3_logic(array, size);

	cout << "Seminar 3 ended\n";
	system("pause");
	system("cls");

	return 0;
}