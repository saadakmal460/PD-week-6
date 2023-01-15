#include <iostream>
using namespace std;

int main() {
    int startHours, startMinutes, arrivalHours, arrivalMinutes;

    cout << "Enter exam start time(hours): ";
    cin >> startHours ;

    cout << "Enter exam start time(minutes): ";
    cin >> startMinutes;
    
    cout << "Enter student arrival time(hours): ";
    cin >> arrivalHours;
    
    cout << "Enter student arrival time(hours): ";
    cin >> arrivalMinutes;


    int start_time = startHours * 60 + startMinutes;
    int arrival_time = arrivalHours * 60 + arrivalMinutes;

  
    int difference = arrival_time - start_time;
    int hours = difference / 60;
    int minutes = difference % 60; 



    if (difference < -30) 
    {
        cout << "Early" <<endl; 
        cout<< -hours << " : "<< -minutes << " before the start"<< endl;
    } 
    
    else if (difference <= 0) 
    {
        cout << "On time" << endl << -minutes << " minutes before the start"<< endl;
    } 
    
    else 
    {
        cout << "Late" << endl; 
        cout<< hours << " : " <<minutes << " after the start"<< endl;
    }

    
      
}
