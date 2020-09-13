#include <iostream>
using namespace std;
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main()
{
	int choice=0;
	int a=0,b=0;
	cout<<"Pick an option : \n1. Add \n2. subtract\n3. multiply\n4. divide\n5. Quit\nYour choice is: ";
	cin>>choice;
	cout<<"\nEnter the two numbers:\n";
	cin>>a>>b;
	switch(choice)
	{
		case 1: cout<<"The Addition is :"<<add(a,b);
	    break;
	    case 2: cout<<"The subtraction is :"<<subtract(a,b);
	    break;
	    case 3: cout<<"The multiplication is :"<<multiply(a,b);
	    break;
	    case 4: cout<<"The division is :"<<divide(a,b);
	    break;
	    case 5: exit(0);
	    break;
	    default: cout<<"Invalid choice"; 
	}
}
	int add(int a, int b)
    {
     return(a+b);
    }
    int subtract(int a, int b)
    {
     return(a-b);
    }
    int multiply(int a, int b)
    {
     return(a*b);
    }
    int divide(int a, int b)
    {
     return(a/b);
    }

	
