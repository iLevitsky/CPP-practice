#include <iostream>
#include <ctime>

using namespace std;

int main() {
  time_t current_time = time(nullptr);
  tm* birth_time = new tm;

  cout << "Enter your birth date (yyyy mm dd): ";
  cin >> birth_time->tm_year >> birth_time->tm_mon >> birth_time->tm_mday;
  
  birth_time->tm_year -= 1900;
  birth_time->tm_mon -= 1;
  birth_time->tm_sec = 0;
  birth_time->tm_min = 0;
  birth_time->tm_hour = 0;
  birth_time->tm_isdst = 0;

  time_t birth_time_t = mktime(birth_time);

  double seconds = difftime(current_time, birth_time_t);

  int years = seconds / (60 * 60 * 24 * 365);
  seconds -= years * (60 * 60 * 24 * 365);

  int months = seconds / (60 * 60 * 24 * 30);
  seconds -= months * (60 * 60 * 24 * 30);

  int weeks = seconds / (60 * 60 * 24 * 7);
  seconds -= weeks * (60 * 60 * 24 * 7);

  int days = seconds / (60 * 60 * 24);
  seconds -= days * (60 * 60 * 24);

  int hours = seconds / (60 * 60);
  seconds -= hours * (60 * 60);

  int minutes = seconds / 60;
  seconds -= minutes * 60;

  cout << "You are " << years << " years, " << months << " months, "
       << weeks << " weeks, " << days << " days, " << hours << " hours, "
       << minutes << " minutes, and " << seconds << " seconds old." << endl;

  return 0;
}
