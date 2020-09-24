#include <iostream>
#include <iomanip>
using namespace std;

class time
{
    private : 
        int hour;
        int minute;
        int second;
        int seconds;
    public:
        void inval();
        void outval();
};

void time :: inval () {
    cout << "Enter the time: \n"; 
    cout << "Hours - \n";  cin >> hour;   
    cout << "Minutes - \n";  cin >> minute;
    cout << "Seconds - \n";  cin >> second;
}

void time :: outval(){
    seconds = hour * 3600 + minute * 60 + second;
        cout << "The given time is : "  << setw (2)<< setfill ('0') << hour 
                                    <<":"<< setw (2)<< setfill ('0') << minute 
                                    <<":"<< setw (2)<< setfill ('0') << second ;
                                    
    cout <<endl<< "Time in seconds: " << seconds;   
}




int main(){
    
         time s1;
        s1.inval();
        s1.outval();
    
return 0;
}
