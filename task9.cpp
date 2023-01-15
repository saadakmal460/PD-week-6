#include <iostream>
#include <windows.h>
using namespace std;




void maze();
void gotoxy(int x , int y);
char getCharATXY(short int x , short int y);
void clear(int x , int y , char previous);
void printGhost(int x , int y);


main()
{
     int gx = 28;
     int gy = 1;
     string direction = "right";
     char previousChar = ' ';
     system("cls");
     maze();
     printGhost(gx , gy);
     while (true)
     {
        Sleep(100);

        if (direction == "right")
        {
            char nextLocation = getCharATXY(gx + 1 , gy);
            if (nextLocation == '|')
            {
                direction = "left";
            }

            else if (nextLocation == ' ' || nextLocation == '-')
            {
                clear(gx , gy , previousChar);
                gx = gx + 1;

                previousChar = nextLocation;
                printGhost(gx , gy);
            }            
        }



        if (direction == "left")
        {
            char nextLocation = getCharATXY(gx - 1 , gy);
            if (nextLocation == '|')
            {
                direction = "right";
            }

            else if (nextLocation == ' ' || nextLocation == '-')
            {
                clear(gx , gy , previousChar);
                gx = gx - 1;

                previousChar = nextLocation;
                printGhost(gx , gy);
            }            
        }

         
        }
     
     

     }


     
     








void maze()
{

cout << "                        #################################################################################################    " <<endl;
cout << "                        || --  --------------------------------------------------------------------------------------- ||    " <<endl;
cout << "                        || --  %%%%%%%%%%%%%%%%%%%%         ---       %%%%%%%%%%%%%%%%%%%%       |%|--    %%%%%%%% --- ||    " <<endl;                                                                                                                                 
cout << "                        || --         |%|       |%|      |%|---       |%|              |%|       |%|--         |%|     ||    " <<endl;                                                           
cout << "                        || --         |%|       |%|      |%|---       |%|              |%|       |%|           |%|     ||    " <<endl;                                                           
cout << "                        || --         %%%%%%%%%%%%% - -  |%|---       %%%%%%%%%%%%%%%%%%%%                 %%%%%%%% -  ||    " <<endl;                                                                                             
cout << "                        || --         |%|           - -  |%|---        ------ - - - - - -      |%|--                -  ||    " <<endl;                                                                                                               
cout << "                        || --         %%%%%%%%%%%%%%- -  |%|---       %%%%%%%%%%%%%%%%%%%      |%|--           %%%% -  ||    " <<endl;
cout << "                        || --                    |%| -                |%| ------               |%|-             |%|-   ||    " <<endl;
cout << "                        || --      - - --  - -  -|%| -                |%| ------- |%|           -               |%|-   ||    " <<endl;
cout << "                        || --|%|   |%|%%%%|%| -  |%| -  |%|               ------- |%|            --|%|          |%|-   ||    " <<endl;
cout << "                        || --|%|   |%|    |%| - -|%| - - %%%%%%%%%%%%%%% -------  |%|             -|%|-                ||    " <<endl;
cout << "                        || --|%|   |%|    |%| - -                  ---|%|  %%%%%%%%              - |%|-                ||    " <<endl;
cout << "                        || --|%|                -                  ---|%|                    |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|   %%%%%%%%%%%%%%%           ---|%|%%%%%%%%%%%%%%            |%| --|%|%%%%%%%%%%%%%    ||    " <<endl;
cout << "                        || ---------------------------  -- -------------------------------   |%| ------------------    ||    " <<endl;
cout << "                        ||    --------------------------------  ----------------                  -----------------    ||    " <<endl;
cout << "                        || --|%|    |%|    |%|--       %%%%%%%%%  -----------|%|             |%| --|%|--               ||    " <<endl;
cout << "                        || --|%|    |%|    |%|--      --- |%|            %%%%%%%             |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|                    - - - |%|                |%|             |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|    %%%%%%%%%%%%%%%%%       - - - |%|%%%%%%%%%%%             |%| --|%|%%%%%%%%%%%%%    ||    " <<endl;                                                                                                                                           
cout << "                        || ---------------------------------------------------------------   |%| ------------------    ||    " <<endl;                                                                                                                                 
cout << "                        ||     -----------------------------------------------------------          ---------------    ||    " <<endl;
cout << "                        #################################################################################################    " <<endl;  


}



void clear(int x , int y , char previous)
{
    gotoxy(x , y);
    cout << previous;
}


void printGhost(int x , int y){

    gotoxy(x,y);
    cout << "G";
}


void gotoxy(int x , int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}



char getCharATXY(short int x , short int y){

  CHAR_INFO ci;
  COORD xy = {0 , 0};
  SMALL_RECT rect ={x ,y ,x , y};
  COORD coordBufsize;
  coordBufsize.X = 1;
  coordBufsize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci , coordBufsize , xy , &rect) ? ci.Char.AsciiChar :' ';

}
