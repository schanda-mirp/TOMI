#include <iostream.h>
#include <TIME.h>
#include <conio.h>

int main()
{
  clrscr();
  time_t currentTime;
  struct tm *localTime;

  time( &currentTime );                   // Get the current time
  localTime = localtime( &currentTime );  // Convert the current time to the local time

  int Day    = localTime->tm_mday;
  int Month  = localTime->tm_mon + 1;
  int Year   = localTime->tm_year + 1900;
  int Hour   = localTime->tm_hour;
  int Min    = localTime->tm_min;
  int Sec    = localTime->tm_sec;

  cout << "This program was exectued at: " << Hour << ":" << Min << ":" << Sec << endl;
  cout << "And the current date is: " << Day << "/" << Month << "/" << Year << endl;
  getch();
  return 0;
}