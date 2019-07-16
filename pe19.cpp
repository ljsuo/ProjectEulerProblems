#include <iostream>
using namespace std;

const int WEEKDAYS = 7;
const int YEARDAYS = 365;
const int LEAPDAYS = 366;

bool is_leap(int year){
	if(year % 4 == 0){
		if(year % 100 == 0 && year % 400 != 0){
			return false;
		}
		return true;
	}
	return false;
}

int days_month(int month, bool is_leap){
	// 30 days has Sept, Apr, Jun, Nov
	if(month == 4 || month == 6 || month == 9 || month == 11){
		return 30;
	}
	// Feb
	else if(month == 2){
		if(is_leap){
			return 29;
		}
		else{
			return 28;
		}
	}
	// Other months
	else{
		return 31;
	}
}

int main ()
{
	// 1900 is not leap year
	// 1 Jan 1900 is Mon
	// Therefore 1 Jan 1901 is Tue
	int start_year = 1901;
	int start_month = 1;
	int days_since = 0;
	int first_suns = 0;

	while(start_year != 2000 && start_month != 12){
		// Find next first of the month
		days_since += days_month(start_month, is_leap(start_year));
		// Start day is a Tuesday
		// If start_day % 7 == 5 then the day is Sunday
		if(days_since % 7 == 5){
			first_suns++;
		}
		start_month++;
		if(start_month == 13){
			start_month = 1;
			start_year++;
		}

	}
	cout << first_suns << endl; 
	return 0;
}