//Check whether a person is eligible to vote or not according to the age given by the user
#include<iostream>
using namespace std;

int main()
{
	int a=0;
	cout<< "Please enter your age to check whether you are eligible to vote or not: ";
	cin>>a;
	
	//Chekcking if the given age is smaller than 18 years of age as it is one of the eligibility criteria for voting
	if(a<18)
	{
		cout<< "Sorry young lad right now you are not eligible to vote, but wait for\n"<<18-a<<"-years for your turn to vote" ;
		
	}
	

	else
	{
		cout<< "Hey! You can definitely vote\nRemember! each and every vote counts ";
	}
	

	
	return 0;
}
