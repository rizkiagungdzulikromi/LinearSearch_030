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

	// Array 

}