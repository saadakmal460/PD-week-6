#include <iostream>
using namespace std;


string activity(string temp , string humid );



int main()
{

    string temperature, humidity , result;

    cout << "Enter temperature (warm or cold): ";
    cin >> temperature;

    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;

    result = activity(temperature , humidity );
    cout << result;

}


string activity(string temp , string humid )
{
    string sports;

    if(temp == "warm" && humid == "dry"){
       sports = "Play tennis";    
    }

    else if (temp == "warm" && humid == "humid")
    {
        sports = "Swim";
    }

    else if (temp == "cold" && humid == "dry")
    {
       sports = "Play basketball";    
    }

    else if (temp == "cold" && humid == "humid")
    {
        sports = "Watch TV";
    }

    else{
        sports = "none";
    }

    return sports;

  
}