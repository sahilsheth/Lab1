//Sahil Sheth
//Code to reverse an array of numbers based on what the
//user writes. Structure is similar to how and what the EPP tests
//in Part 1.


#include <iostream>
#include <string>

using namespace std;

// printArray is implemented here
void printArray(int arr[], int size)
{
  //print out all the numbers
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}


void reverseArray(int  arr[], int num)
{
    //intended to capture the first index in the array
    int begin = 0;

    //get the last index based from how many integers the user had decided upon
    int end = num - 1;

    //tempNumber will store the first integer in the array and then make the
    //first integer equal to the last integer and then swap the last integer to
    //the temporary number.
    while (begin < end)
    {
        int tempNumber = arr[begin];
        arr[begin] = arr[end];
        arr[end] = tempNumber;
        ++begin;
        --end;
    }
}


// Main code using a similar structure from the EPP
int main() {
	int myarray[100];
	cout << "Enter number of integers : ";
	int n;
	cin >> n;
	cout << "Enter " << n << " integers" << endl;
	for (int i = 0; i < n; i++)
		cin >> myarray[i];
	cout << "Before : ";
	printArray(myarray, n);
	reverseArray(myarray, n);
	cout << "After : ";
	printArray(myarray, n);
}
