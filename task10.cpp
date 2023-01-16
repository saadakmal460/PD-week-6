#include <iostream>
#include <windows.h>
using namespace std;

void maze();
void gotoxy(int x , int y);
char getCharATXY(short int x , short int y);
void erase(int x , int y);
void printPacman(int x , int y);
int gameScore(int score);



main(){

int pacmanX = 28;
int pacmanY = 1;
int score = 0;

int result ;
bool gameRunning = true;

system("cls");
maze();
printPacman(pacmanX , pacmanY);

while(gameRunning)
{




if(GetAsyncKeyState(VK_LEFT))
{

 char nextLocation = getCharATXY(pacmanX - 1 , pacmanY);
 if (nextLocation == ' ')
 {
  erase(pacmanX , pacmanY);
  pacmanX = pacmanX - 1;
  printPacman(pacmanX , pacmanY);
 }
 if (nextLocation == '-')
 {
  erase(pacmanX , pacmanY);
  pacmanX = pacmanX - 1;
  printPacman(pacmanX , pacmanY);

  score= score + 1;
  gotoxy(1,1);
  cout << "Score is : " <<score;
 }



}


if(GetAsyncKeyState(VK_RIGHT))
{

 char nextLocation = getCharATXY(pacmanX + 1 , pacmanY);
 if (nextLocation == ' ')
 {
  erase(pacmanX , pacmanY);
  pacmanX = pacmanX + 1;
  printPacman(pacmanX , pacmanY);
 
}
 if (nextLocation == '-')
 {
  erase(pacmanX , pacmanY);
  pacmanX = pacmanX + 1;
  printPacman(pacmanX , pacmanY);
   
  score= score + 1;
  gotoxy(1,1);
  cout << "Score is : " <<score;


  }



 
}
 



if(GetAsyncKeyState(VK_UP))
{

 char nextLocation = getCharATXY(pacmanX, pacmanY - 1);
 if (nextLocation == ' ')
 {
  erase(pacmanX , pacmanY);
  pacmanY = pacmanY - 1;
  printPacman(pacmanX , pacmanY);
 }
  if (nextLocation == '-')
 {
  erase(pacmanX , pacmanY);
  pacmanY = pacmanY - 1;
  printPacman(pacmanX , pacmanY);
  
  score= score + 1;
  gotoxy(1,1);
  cout << "Score is : " <<score;
  


 }

}


if(GetAsyncKeyState(VK_DOWN))
{

 char nextLocation = getCharATXY(pacmanX, pacmanY + 1);
 if (nextLocation == ' ')
 {
  erase(pacmanX , pacmanY);
  pacmanY = pacmanY + 1;
  printPacman(pacmanX , pacmanY);
 }

  if (nextLocation == '-')
 {
  erase(pacmanX , pacmanY);
  pacmanY = pacmanY + 1;
  printPacman(pacmanX , pacmanY);
  
  score= score + 1;
  gotoxy(1,1);
  cout << "Score is : " <<score;


 }

}

Sleep(200);
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
cout << "                        || --|%|   |%|%%%%|%| -  |%| - |%|                ------- |%|            --|%|          |%|-   ||    " <<endl;
cout << "                        || --|%|   |%|    |%| - -  |%|- - %%%%%%%%%%%%%%% ------- |%|             -|%|-                ||    " <<endl;
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



void erase(int x , int y){

 gotoxy(x , y);
 cout << " " ;
 
}

void printPacman(int x , int y){

  gotoxy(x,y);
  cout << "p";
}



int gameScore(int score)
{
  
  int score2 = score + 2;
  return score2;
}