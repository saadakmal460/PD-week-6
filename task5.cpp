#include <iostream>
using namespace std;




float calculatePrice(string fruit , string day , float quantity );


main()
{
   float quantity ,  result;
   string day , fruit; 

   cout << "Enter fruit: ";
   cin >> fruit;

    cout << "Enter week day: ";
   cin >> day;

   cout << "Enter quantity of fruit: ";
   cin >> quantity;

 

   result = calculatePrice(fruit , day , quantity );
   cout << result;




}




float calculatePrice(string fruit , string day , float quantity )
{

    float amount;

    if (day == "saturday" || day == "sunday")
    {
        if (fruit == "banana")
        {
            amount = quantity * 2.70;
        }

        else if(fruit == "apple")
        {
            amount = quantity * 1.25;
        }

        else if (fruit == "orange")
        {
            amount = quantity * 0.90;
        }

        else if (fruit == "grapefruit")
        {
            amount = quantity * 1.60;
        }

        else if (fruit == "kiwi")
        {
            amount = quantity * 3.00;
        }

        else if (fruit == "pineapple")
        {
            amount = quantity * 5.60;
        }

        else if (fruit == "grapes")
        {
            amount = quantity * 4.20;
        }
            
    }

    else if (day != "saturday" || day != "sunday")
    {
        if (fruit == "banana")
        {
            amount = quantity * 2.50;
        }

        else if(fruit == "apple")
        {
            amount = quantity * 1.20;
        }

        else if (fruit == "orange")
        {
            amount = quantity * 0.85;
        }

        else if (fruit == "grapefruit")
        {
            amount = quantity * 1.45;
        }

        else if (fruit == "kiwi")
        {
            amount = quantity * 2.70;
        }

        else if (fruit == "pineapple")
        {
            amount = quantity * 5.50;
        }

        else if (fruit == "grapes")
        {
            amount = quantity * 3.85;
        }
            
    }

     



 return amount;






    
}




