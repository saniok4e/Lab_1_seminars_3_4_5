#include "Libraries.h"
#include "Prototypes.h"

int Get_borders(int &left,int &right)
{
	do
	{
		cout << "input left border: ";
		left = Get_number();
		cout << endl;

		cout << "input right border: ";
		right = Get_number();
		cout << endl;

		if (left >= right) {
			cout << "wrong borders, A is equal or greater B\n";
		}

	} while (left >= right);

	return 0;
}