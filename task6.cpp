#include <iostream>
using namespace std;



float claculateRentStudio(string month , int number);
float claculateApartmentStudio(string month , int number);



main()
{
    string month;
    int number;
    float result , result2;


    cout << "Enter month: ";
    cin >> month;

    cout << "Enter number: ";
    cin >> number;

    result = claculateRentStudio( month , number);
    result2 = claculateApartmentStudio(month ,number);
    
    
    cout << "Appartment: "<< result2 <<endl;
    cout << "Studio: " <<result <<endl;
    




}







float claculateRentStudio(string month , int number)
{
    float rentStudio;

    if (month == "may" || month == "october" )
    {
        if(number >7 && number <=14)
        {
        float final = 50 * number;
        rentStudio  = final - (final* 0.05); 
        }

        else if (number >14)
        {
          float final = 50 * number;
          rentStudio  = final - (final* 0.3); 
        }

        else 
        {
            rentStudio = 50 * number;
        }
        
        
    }



    else if (month == "june" || month == "september" )
    {

        if (number >14)
        {
          float final = 75.20 * number;
          rentStudio  = final - (final* 0.2); 
        }

        else if (number <= 14)
        {
            rentStudio = 75.20 * number;
        }
        
        
    }

    
    
    else if (month == "july" || month == "august" )
    {
        
        rentStudio = 76 * number;        
    }

    
 return rentStudio;
 


}





float claculateApartmentStudio(string month , int number)
{
    float appartmentStudio;




    if (month == "may" || month == "october" )
    {

        if (number >14)
        {
          float final = 65 * number;
          appartmentStudio  = final - (final * 0.1); 
        }

        else if (number <= 14)
        {
            appartmentStudio  = 65 * number;
        }             
    }



    else if (month == "june" || month == "september" )
    {

        if (number >14)
        {
          float final = 68.70 * number;
          appartmentStudio   = final - (final* 0.1); 
        }

        else if (number <= 14)
        {
            appartmentStudio  = 68.70 * number;
        }
       
    }


    else if (month == "july" || month == "august" )
    {
        if (number >14)
        {
          float final = 77.00 * number;
          appartmentStudio   = final - (final* 0.1); 
        }
        else if(number <= 14)
        {
        
        appartmentStudio  = 77.00 * number;        
        
        }
    }


    return appartmentStudio ;






}