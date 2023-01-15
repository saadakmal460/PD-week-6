#include <iostream>
using namespace std;



string checkLocation(int h , int x , int y);




main()
{
    int coordinateX , coordinateY , h;


    cout << "Enter h: ";
    cin >> h;


    cout << "Enter x coordinate: ";
    cin >> coordinateX;


    cout << "Enter y coordinate: ";
    cin >> coordinateY;

    string result = checkLocation(h , coordinateX ,coordinateY);
    cout << result;
}




string checkLocation(int h , int x , int y)
{
    string check;
    if ((x==1 || x==3 || x ==5 || x==7) && (y==1 || y==3 || y==5 || y==7 || y==9))
    {
        check = "inside";
    }

    else if((x==0 || x==6) && y <=2)
    {
        check ="border";
    }

    else if ((x==1 || x==5) && (y==2 || y == 0))
    {
        check = "border";
    }

    else if ((x==2||x==4) && y<=8)
    {
        check = "border";
    }

    else if (x == 3 && y%2!=0)
    {
        check = "border";
    }

    else{
        check= "outside";
    }


    return check;


    
    
    
    
    
}