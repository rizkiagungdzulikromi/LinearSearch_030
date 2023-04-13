#include <iostream>
using namespace std;


int arr[20]; // Array to be searched
int n; // number of elements in the array 
int i; // index of array elements


void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout <<"\nArray should have minimun 1 and maximum 20 elements.\n\n";
	}

	// Array array elements 
	cout << "\n______________________\n";
	cout << " Enter array elements \n";
	cout << "______________________\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + i) << "> ";
		cin >> arr[i];
	}

}


void LinearSearch()
{
	char ch;
	int comparison; //Number of comparisons

	do              // Langkah 3
	{
		// Accept the number to be searched
		cout << "\nEnter the element you want to search: "; // Langkah 1
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0; i < n; i++)                         //Langkah 2 dan 4
		{
			comparison++;
			if (arr[i] == item)
			{                                       //Langkah 5 a found 
				cout << "\n" << item << " found at position " << (i + i) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparison: " << comparison << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));
}


int main()
{
	input();
	LinearSearch();
}