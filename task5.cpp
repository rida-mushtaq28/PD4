#include <iostream>
#include<windows.h>
using namespace std;
  
void gotoxy(int ,int);
void myname(char name);


main ()
{
 char name;
 myname(name);
 gotoxy(30,20);
}

  void myname (char name)
  {
  gotoxy(30,20);
  cout << "     ##########    ##  #########     ##########           " << endl;
  gotoxy(30,21);
  cout << "     ##       ##   ##  ##      ##    ##      ##           " << endl;
  gotoxy(30,22);
  cout << "     ##       ##   ##  ##       ##   ##      ##           " << endl;
  gotoxy(30,23);
  cout << "     ##       ##   ##  ##        ##  ##      ##           " << endl;
  gotoxy(30,24);
  cout << "     ##########    ##  ##         ## ##########           " << endl;
  gotoxy(30,25);
  cout << "     ###           ##  ##         ## ##      ##           " << endl;
  gotoxy(30,26);
  cout << "     ##  ##        ##  ##         ## ##      ##           " << endl;
  gotoxy(30,27);
  cout << "     ##    ##      ##  ##       ##   ##      ##           " << endl;
  gotoxy(30,28);
  cout << "     ##      ##    ##  #########     ##      ##           " << endl;
  } 


  void gotoxy(int x,int y)
 {
   COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

 }