#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string Text;
	ifstream ReadFile;
	
	ReadFile.open("F:\\Sequence.txt", ios::in);
	while (getline(ReadFile, Text)) {
		cout << Text + "\n";
	}

	return 0;
}

