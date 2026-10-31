#include "Time.h"
#include <string>
#include <iostream>

using namespace std;

namespace planning{


	//Constructeur par défaut
	Time::Time()
	{
		cout << ">>> Time : Constructeur par défaut <<<" << endl;
		setHour(0);
		setMinute(0);
	}

	//Constructeur d'initalisation

	Time::Time(int h, int m)
	{
		cout << ">>> Time : Constructeur d'initialisation <<<<" << endl;
		setHour(h);
		setMinute(m);
	}

	Time::Time(int duration)
	{
	  cout << ">>> Time : Constructeur d'initialisation <<<<" << endl;
	  setHour(duration / 60);
	  setMinute(duration % 60);
	}


	//Constructeur de copie
	Time::Time(const Time &t)
	{
		cout << ">>> Time : Constructeur de copie <<<<" << endl;
		setHour(t.getHour());
		setMinute(t.getMinute());
	}

	//Destructeur
	Time::~Time()
	{
		cout << ">>> Time : Destructeur <<<<" << endl;

	}


	//SETTERS
	void Time::setHour(int h)
	{
		hour = h;
	}

	void Time::setMinute(int m)
	{
		minute = m;
	}

	//GETTERS
	int Time::getHour() const
	{
		return hour;
	}

	int Time::getMinute() const
	{
		return minute;
	}

	void Time::display() const
	{
		if (hour < 10) cout << '0';
		cout << hour;
		cout << "h";
		if (minute < 10) cout << '0';
		cout << minute;
	}

	int Time::toMinutes() const
	{
		return hour * 60 + minute;
	}

	// OPERATOR =
	Time& Time::operator=(const Time& t)
	{
	    cout << ">>> Time : operateur = <<<" << endl;
	    if (this == &t) return *this;
	    setHour(t.getHour());
	    setMinute(t.getMinute());
	    return *this;
	}

	// OPERATOR +
	// Time + int
	Time Time::operator+(int m) const
	{
	    return Time(toMinutes() + m);
	}

	// Time + Time
	Time Time::operator+(const Time& t) const
	{
	    return Time(toMinutes() + t.toMinutes());
	}

	// int + Time   (friend : pas de Time:: devant)
	Time operator+(int m, const Time& t)
	{
	    return t + m;
	}



	// OPERATOR -
	// Time - int
	Time Time::operator-(int m) const
	{
	    return Time(toMinutes() - m);
	}

	// Time - Time
	Time Time::operator-(const Time& t) const
	{
	    return Time(toMinutes() - t.toMinutes());
	}

	// int - Time   (friend : pas de Time:: devant)
	Time operator-(int m, const Time& t)
	{
	    return Time(m - t.toMinutes());
	}

}
