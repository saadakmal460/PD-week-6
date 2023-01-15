#include <iostream>
using namespace std;







main()
{
    int date;
    string month;


    cout << "Enter date: ";
    cin >> date;

    cout << "Enter month: ";
    cin >> month;




    if ((date >= 21 && month == "march") || (date <=19 && month=="april") )
    {
        cout << "Aries";
    }

    else if((date >= 20 && month == "april") || (date <=20 && month=="may"))
    {
        cout << "Taurus";
    }


    else if((date>= 21 && month == "may") || (date <=20 && month=="june"))
    {
        cout << "Gemini";
    }


    else if((date>= 21 && month == "june") || (date <=22 && month=="july"))
    {
        cout << "Cancer";
    }


    else if((date>= 23 && month == "july") || (date <=22 && month=="august"))
    {
        cout << "Leo";
    }


    else if((date>= 23 && month == "august") || (date <=22 && month=="september"))
    {
        cout << "Virgo";
    }

     
    else if((date>= 23 && month == "september") || (date <=22 && month=="october"))
    {
        cout << "Libra";
    }

    
    else if((date>= 23 && month == "october") || (date <=21 && month=="november"))
    {
        cout << "Scorpio";
    }


    
    else if((date>= 22 && month == "november") || (date <=21 && month=="december"))
    {
        cout << "Sagittarius";
    }


    else if((date>= 22 && month == "december") || (date <=19 && month=="january"))
    {
        cout << "Capricorn";
    }


    else if((date>= 20 && month == "january") || (date <=18 && month=="february"))
    {
        cout << "Aquarius";
    }

    
    else if((date>= 19 && month == "february") || (date <=20 && month=="march"))
    {
        cout << "Pisces";
    }


    else{
        cout << "Error";
    }

    

}