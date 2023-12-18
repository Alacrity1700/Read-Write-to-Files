#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Initialize variables and Create a text file
	int firstNum = 0, secondNum = 1, nextNum{}, size{};
    ofstream MyFile("F:\\Sequence.txt");

    // Ask for size of the sequence
	cout << "Size of sequence:" << endl;
	cin >> size;

    // Print the sequence to the screen and save it to the text file that was created
    MyFile << "Sequence: " << endl;
	for (size_t i = 1; i <= size; i++)
	{
		
        if (i == 1) {
            cout << firstNum << endl;
            MyFile << firstNum << endl;
            continue;
        }                 
        if (i == 2) {
            cout << secondNum << endl;
            MyFile << secondNum << endl;
            continue;
        }
        nextNum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = nextNum;

        cout << nextNum << endl;
        MyFile << nextNum << endl;

	}
    // Close the file
    MyFile.close();
    return 0;
}

