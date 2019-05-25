#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int arr[50][17], i, j, temp, exp1, exp2, exp3, exp4, skill1, skill2, skill3, skill4;
	int machine1, machine2, prac_pre, writ_pre, prac_fin, writ_fin;
	double majorTotal, expTotal, skillTotal, machineTotal, rawTotal, GPA;
	char student;
	
	cout << "STUDENT: "; cin >> student;
	
	for (i=0; i<50; i++)
	{
		for (j=0; j<17; j++)
		{
			cin >> arr[i][j];
			cout << "Experiments: "; cin >> exp1 >> exp2 >> exp3 >> exp4;
			cout << "Skills test: "; cin >> skill1 >> skill2 >> skill3 >> skill4;
			cout << "Machine Problems: "; cin >> machine1 >> machine2;
			cout << "Preliminary exam (practical and written): "; cin >> prac_pre >> writ_pre;
			cout << "Final exam (practical and written): "; cin >> prac_fin >> writ_fin;
			cout << endl;
			
			expTotal = (exp1*0.05)+(exp2*0.05)+(exp3*0.05)+(exp4*0.05);
			skillTotal = (skill1*0.05)+(skill2*0.05)+(skill3*0.05)+(skill4*0.05);
			machineTotal = (machine1*0.10)+(machine2*0.10);
			majorTotal = ((prac_pre+writ_pre)*0.20)+ ((prac_fin+writ_pre)*0.20);
			rawTotal = expTotal+skillTotal+machineTotal+majorTotal;
		
			if (95.57<=rawTotal && rawTotal==100.0)
			{
				GPA = 1.00;
				cout << "GPA: " << GPA << endl;
			}
			else if (91.12<=rawTotal && rawTotal==95.56)
			{
				GPA = 1.25;
				cout << "GPA: " << GPA<< endl;
			}
			else if (86.68<=rawTotal && rawTotal==91.11)
			{
				GPA = 1.50;
				cout << "GPA: " << GPA << endl;
			}
			else if (82.23<=rawTotal && rawTotal==86.67)
			{
				GPA = 1.75;
				cout << "GPA: " << GPA << endl;
			}
			else if (77.79<=rawTotal && rawTotal==82.22)
			{
				GPA = 2.00;
				cout << "GPA: " << GPA << endl;
			}
			else if (73.34<=rawTotal && rawTotal==77.78)
			{
				GPA = 2.25;
				cout << "GPA: " << GPA << endl;
			}
			else if (68.90<=rawTotal && rawTotal==73.33)
			{
				GPA = 2.50;
				cout << "GPA: " << GPA << endl;
			}
			else if (64.45<=rawTotal && rawTotal==68.89)
			{
				GPA = 2.75;
				cout << "GPA: " << GPA << endl;
			}
			else if (60.00<=rawTotal && rawTotal==64.44)
			{
				GPA = 3.00;
				cout << "GPA: " << GPA << endl;
			}
			else if (rawTotal <60.00)
			{
				GPA = 5.00;
				cout << "GPA: " << GPA << endl;
			}
		}
	}
	
	getch();
	return 0;
}
