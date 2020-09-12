#include <iostream>
using namespace std;

int main()
{
	//Pointer declaration
	
	int *p;
	
	//Array declaration
	
	int arr[5];
	
	//Taking inputs from the user for the array
	
	cout<< "Enter any 5 integers as elements of the array: ";
	
	//Using the concept of looping for entering each element at corresponding memory location(specified by index of the array)
	
	for(int i=0; i<5; ++i) //loop initialised to the first index which is 0 and then incremented till end of array
	
	cin>> arr[i];
	
	//Assignment of pointer to array
	
	p = arr;
	
	//Now displaying the elements of the array using pointer and loop 
	
	cout<< "You've entered: ";
	for(int i=0; i<5; ++i)
	{
		cout<<*p<<endl;
	
	//++ moves the pointer to next int position
	p++;
		
	}
}
	
