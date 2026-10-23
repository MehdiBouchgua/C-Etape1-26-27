#include "Timing.h"
#include <string.h>
#include <iostream>

using namespace std;

namespace planning{
	//Constructeur par defaut
	Timing::Timing()
	{
		cout << ">>> Timing : constructeur par défaut <<<" << endl;
		setDay("Lundi");
	}


	//Constructeur d'initialisation
	Timing::Timing(const string& d, const Time& s, const Time& dur)
	{
		cout << ">>> Timing: constructeur d'initialisation <<<<" << endl;
		setDay(d);
		setStart(s);
		setDuration(dur);
	}

	//Constructeur de copie
	Timing::Timing(const Timing& t)
	{
		cout << ">>> Timing : constructeur de copie <<<<" << endl;
		setDay(t.getDay());
		setStart(t.getStart());
		setDuration(t.getDuration());
	}

	// Destructeur
	Timing::~Timing()
	{
		cout << ">>> Timing: Destructeur <<<<" << endl;
	}


	//SETTERS

	void Timing::setDay(const string& d)
	{
		day = d;
	}

	void Timing::setStart(const Time& s)
	{
		start = s;
	}

	void Timing::setDuration(const Time& dur)
	{
		duration = dur;
	}


	//GETTERS

	string Timing::getDay() const
	{
		return day;
	}

	const Time& Timing::getStart() const
	{
		return start;
	}

	const Time& Timing::getDuration() const
	{
		return duration;
	}


	void Timing::display() const
	{
	    cout << day << " a ";
	    start.display();
	    cout << " (";
	    duration.display();
	    cout << ")";
	}

}