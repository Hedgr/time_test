#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono_literals;

int main()
{
	short int repeat = 1;
	short int seconds = 0;
	short int minutes = 0;
	short int hours = 0;
	short int days = 0;
	short int weeks = 0;
	short int months = 0;
	short int years = 0;
	//uwu

	while (repeat == 1)
	{
		std::this_thread::sleep_for(1000ms);
		seconds += 1;

		if (seconds == 60)
		{
			seconds = 0;
			minutes += 1;
		}
		if (minutes == 60)
		{
			minutes = 0;
			hours += 1;
		}
		if (hours == 24)
		{
			hours = 0;
			days += 1;
		}
		if (days == 7)
		{
			days = 0;
			weeks += 1;
		}
		if (weeks == 3)
		{
			weeks = 0;
			months += 1;
		}
		if (months == 12)
		{
			months = 0;
			years += 1;
		}
		cout << years;
		cout << " years ";
		cout << months;
		cout << " months ";
		cout << weeks;
		cout << " weeks ";
		cout << days;
		cout << " days ";
		cout << hours;
		cout << " hours ";
		cout << minutes;
		cout << " minutes ";
		cout << seconds;
		cout << " seconds\n";
	}
} 
