#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i;
	char text[]={'e', 'n', 'g', '1', '9', '0', '7'};
	char back[7];
	
	//inputs the characters in the "text" array into a separate array
	back[0]=text[5];
	back[1]=text[3];
	back[2]=text[6];
	back[3]=text[4];
	back[4]=text[0];
	back[5]=text[2];
	back[6]=text[1];
	
	for (i=0;i<7;i++)
	{
		cout << back[i];
	}
	
	cout << endl;
	cout << "Array size: " << "7";
	return 0;
}
