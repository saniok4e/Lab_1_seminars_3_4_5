#include "Prototypes.h"
#include "Libraries.h"
int Choose_index(int * array,int size,int maximum,int count) 
{
	while (true)
	{
		int choose;
		cout << "input index\n";
		choose = Get_number();
		for (int i = 0; i < size; i++) {
			if (array[i] == maximum) {
				if (choose == i) {
					cout << "Your index was founded\n";
					return choose;
				}
			}
		}
		cout << "Your index wasn't founded,try again\n";
	}
}