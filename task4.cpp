#include <iostream>
using namespace std;



int claculatePrice(char service , char time , int minutes);



main()
{
    char service , time;
    int minutes;
    float result;

    if (service != 'r' || service !='p')
    {
        cout << "error" << endl;
    }

    cout << "Enter which type of customer are you (Residential or Premium) selecr (r/p): ";
    cin >> service;


    cout << "(Press D for day time and N for night time: ";
    cin >> time;


    cout << "Enter number of minutes you used the service: ";
    cin >> minutes;
 
    result = claculatePrice(service , time ,minutes);
    cout << "Charges are : " << result << " $";

    



}



int claculatePrice(char service , char time , int minutes)
{

    float amount;

    if(service == 'r' && (time == 'D' || time == 'N') && minutes <=50)
    {
        amount = 10.00;
    }

    else if(service == 'r' && (time == 'D' || time == 'N') && minutes >50)
    {
        amount = 10.00 + (0.2 * minutes);
    }

    else if (service == 'p' && time == 'D' && minutes <= 75 )
    {
        amount = 25.00;
    }

    else if (service == 'p' && time == 'D' && minutes > 75 )
    {
        amount = 25.00 + (0.1 * minutes);
    }


    else if (service == 'p' && time == 'N' &&  minutes < 100 )
    {
        amount = 25.00 ;
    }

        else if (service == 'p' && time == 'D' && minutes > 100 )
    {
        amount = 25.00 + (0.05* minutes);
    }



    else{
        amount = 0;
    }

    return amount;


    


}