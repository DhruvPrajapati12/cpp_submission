/*

In-class code: Write a cpp code that has two classes Time and Date


The time class:

► Three private members: hour, minute, second

► Three member functions sleep Time(), setTime() and getTime()

	► setTime(): Finds current time and sets values for three variables 
	
	► getTime(): No arguments, returns the values of three variables

	► sleep Time(): Takes two argument of Time type, finds the difference between them, returns a Time variable that holds values


The date class:

► Three public members: day, month, year

► Member functions:

	► setDate(): Reads current date and sets values to three variables, returns Date object with

	► getDate(): No arguments, returns a Date type variable containing values of three variables

	► setDoB(): Takes three integer arguments, creates a local Date object, sets the argument values to the corresponding variables, returns a Date object 		with updated values

	► findAge(): Takes one Date type argument, calls setDate() to get the current date, finds the difference between two dates and prints the age on the 		terminal. Returns nothing.

*/

#include <iostream>
#include <ctime>
using namespace std;

//declaring Time class

class Time
{
	public:
 
		int hour, minute, second;     //declaration of hour, minute, second variables

	public:

		void setTime()				//setTime() function set hour, minute and second variable accrording to the current time
		{
			time_t currentTime;
  			struct tm *localTime;

  			time( &currentTime );
  			localTime = localtime( &currentTime );

  			hour = localTime->tm_hour;
  			minute  = localTime->tm_min;
  			second = localTime->tm_sec;
		}

		Time getTime()			//getTime() function returns the object of the Time
		{
			Time t;
			t.hour = hour;
			t.minute = minute;
			t.second = second;
			return t;
		}

		Time sleepTime(Time t1, Time t2)		//sleepTime() returns the difference betweeen two Time object
		{
			Time t;
			t.hour = t2.hour - t1.hour;
			t.minute = t2.minute - t1.minute;
			t.second = t2.second - t1.second;
			return t;
		}
};

//declaring Date class

class Date
{
	public:

		int day, month, year;			//declaration of day, month, year variables

		
		Date setDate(int da, int m, int y)			//setDate() function set day, month and year variable
		{
			Date d;
			d.day = da;
			d.month = m;
			d.year = y;
			return d;
		}

		Date getDate()			//getDate() returns the object of the Date class
		{
			Date d;
			d.day = day;
			d.month = month;
			d.year = year;
			return d;
		}

		Date setDoB(int da, int m, int y)		//setDoB() set the DoB of given value
		{
			Date d;
			d.day = da;
			d.month = m;
			d.year = y;
			return d;
		}

		void findAge(Date d)			//findAge() function print age
		{
			d.setDate(day, month, year);
			Date d1;
			d1.setDate(30, 11, 2000);
			cout << "Age: " << d.year - d1.year << endl; 
		}
};

int main()
{
	Time t1, t2, t3, t4, t5;			//Creating the objects of Time class
	t1.setTime();						
	t2 = t1.getTime();
	cout << "Hours: " << t2.hour << " Minutes: " << t2.minute << " Seconds: " << t2.second << endl;

	t1.setTime();
	t2.setTime();
	t4 = t3.sleepTime(t1, t2);
	cout << "Sleep -> Hours: " << t4.hour << " Minutes: " << t4.minute << " Seconds: " << t4.second << endl;


	Date d1, d2, d3;				//Creating the objects of Date class

	time_t currentTime;
  	struct tm *localTime;

  	time( &currentTime );
  	localTime = localtime( &currentTime );

	int day = localTime->tm_mday;
	int month = localTime->tm_mon+1; 
	int year = localTime->tm_year+1900;
 
	d2 = d1.setDate(day, month, year);
	cout << "Day: " << d2.day << " Month: " << d2.month << " Year: " << d2.year << endl;
	
	d2.setDoB(30, 11, 2000);
	d3.findAge(d2);
}
