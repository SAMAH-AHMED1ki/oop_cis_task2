#include <cstdio>
using namespace std;
#include <sstream>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

class Time {
private:
	int hours, minutes, seconds;

public:
	Time(int hours, int minutes, int seconds) :
		hours(hours), minutes(minutes), seconds(seconds) {
	}
	void SetTime(int hours, int minutes, int seconds) {
		this->hours = hours;
		this->minutes = minutes;
		this->seconds = seconds;
	}
	int GetTotalSeconds() {
		return hours * 60 * 60 + minutes * 60 + seconds;
	}
	int GetTotalMinutes() {
		return hours * 60 + minutes;
	}
	void PrintHHMMSS() {
		cout << hours << ":" << minutes << ":" << seconds << "\n";
	}
	string ToSring(string seperator = "-") {
		ostringstream oss;
		oss << hours << seperator << minutes << seperator << seconds;
		return oss.str();
	}
	int GetHours() {
		return hours;
	}
	Time& SetHours(int hours) {
		this->hours = hours;
		return *this;

	}
	int GetMinutes() {
		return minutes;
	}
	Time& SetMinutes(int minutes) {
		if (minutes < 0)
			minutes = 0;
		this->minutes = minutes;
		return *this;
	}
	int GetSeconds() {
		return seconds;
	}
	Time& SetSeconds(int seconds) {
		if (seconds < 0)
			seconds = 0;
		this->seconds = seconds;
		return *this;
	}
};
//this is pointer to the current object
// time& is refernce not a copy
// return this* returns the current object
//make the fun return object to make method chaining
int main() {
	Time t(3, 1, 1);
	t.PrintHHMMSS();
	
	t.SetHours(5).SetMinutes(4).SetSeconds(9);
	t.PrintHHMMSS();
	return 0;
}
