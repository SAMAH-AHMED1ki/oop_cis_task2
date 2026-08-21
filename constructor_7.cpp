#include <cstdio>
using namespace std;
#include <sstream>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

class Time {
private:
	int total_seconds;

public:
	Time(int total_seconds) : total_seconds(total_seconds) {
	}
	void SetTime( int total_seconds) {
		
		this->total_seconds = total_seconds;
	}
	int GetTotalSeconds() {
		return total_seconds;
	}
	int GetTotalMinutes() {
		return total_seconds/60;
	}
	void PrintHHMMSS() {
		cout << total_seconds / 3600 << ":" << total_seconds/60 << ":" << total_seconds%60 << "\n";
	}
	string ToSring(string seperator = "-") {
		ostringstream oss;
		oss << total_seconds / 3600 << seperator << total_seconds / 60 << seperator << total_seconds;
		return oss.str();
	}
	int GetHours() {
		return total_seconds/3600;
	}
	Time& SetHours(int new_hour) {
		if (new_hour < 0)
			new_hour = 0;
		int newh = new_hour;
		int minute = (total_seconds % 3600)/60;
		int second = (total_seconds % 60);
        this->total_seconds = newh*3600 + minute*60 + second;
		return *this;
	}
	int GetMinutes() {
		return total_seconds/60;
	}
	Time& SetMinutes(int new_min) {
		if (new_min < 0)
			new_min = 0;
		int minute = new_min;
		int hour = total_seconds / 3600;
		int second = (total_seconds % 60);
		this->total_seconds = hour * 3600 + minute*60 + second;
		return *this;
	}
	int GetSeconds() {
		return total_seconds%60;
	}
	Time& SetSeconds(int seconds) {
		if (seconds < 0)
			seconds = 0;
		int sec = seconds;
		int minute = (total_seconds % 3600) / 60;
		int hour = (total_seconds /3600);
		this->total_seconds = sec + minute*60 + hour*3600;
		return *this;
	}
};

int main() {
	
}
