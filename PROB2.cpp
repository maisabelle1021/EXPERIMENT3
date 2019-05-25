#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i, j, provA[7], provB[7], provC[7];
	
	cout << "Enter all temperatures for a week of Province A, B and C." << endl;
	cout << endl;
	
	for (i=0; i<7; i++)
	{
		j = i+1;
		cout << "Province A, Day " << j << ": "; cin >> provA[i];
	}
	
	for (i=0; i<7; i++)
	{
		j=i+1;
		cout << "Province B, Day " << j << ": "; cin >> provB[i];
	}
	
	for (i=0; i<7; i++)
	{
		j=i+1;
		cout << "Province C, Day " << j << ": "; cin >> provC[i];
	}
	cout << endl << endl;
	for (i=0; i<7; i++)
	{
		j=i+1;
		cout << "Province A, Day" << j << "= " << provA[i] << endl;
	}
	
	for (i=0; i<7; i++)
	{
		j=i+1;
		cout << "Province B, Day" << j << "= " << provB[i] << endl;
	}

	for (i=0; i<7; i++)
	{
		j=i+1;
		cout << "Province C, Day" << j << "= " << provC[i] << endl;
	}
	
	getch();
	return 0;
}
