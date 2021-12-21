#include "Prototypes.h"
#include "Libraries.h"

int Sem_3_logic(int* array, int size) 
{
	while (true) 
	{
		int maximum;
		int count;
		int index_maximum;
		int choose;
		int left_border;
		int right_border;
		int* ParraySort = NULL;

		Show_menu_sem_3();

		switch (Menu_choose())
		{
		case '1':
			system("cls");
			Get_borders(left_border, right_border);
			Show_index_between_borders(array, size, left_border, right_border);
			break;

		case '2':
			system("cls");
			maximum = Find_maximum_element(array, size);
			count = Show_indexes_of_maximums(array, size, maximum);
			index_maximum = Choose_index(array, size, maximum, count);
			Sum_after_maximum(array, size, index_maximum);
			break;

		case '3':
			system("cls");
			cout << "Array before sort: \n";
			cout << "Array after sort: \n";
			ParraySort = abs_selection_sort(array, size);
			Output_one_dimensional_array(array, size);
			Output_one_dimensional_array(ParraySort, size);
			delete[] ParraySort;
			break;

		case '4':
			system("cls");
			delete[] array;

			return 0;

		default:
			system("cls");
			cout << "Wrong data, this function doesn't exist \n\n";
			break;
		}
	}
}
