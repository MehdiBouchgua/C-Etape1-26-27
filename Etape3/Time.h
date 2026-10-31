#ifndef TIME_H
#define TIME_H


namespace planning{
	class Time
	{
	private:
		int hour;
		int minute;

	public:
		Time();
		Time(int h, int m);
		Time(int duration);
		Time(const Time& t);
		~Time();


		void setHour(int h);
		void setMinute(int m);

		int getHour() const;
		int getMinute() const;


		int toMinutes() const; // méthode de conversion
		Time& operator=(const Time& t);
		
		Time operator+(int m) const;
		Time operator+(const Time& t) const;
		friend Time operator+(int m, const Time& t);

		Time operator-(const Time& t);
		Time operator-(int m) const;
		friend Time operator-(int m, const Time& t);




		void display() const;
	};

}

#endif