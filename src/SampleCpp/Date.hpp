#ifndef DATE_HPP_
#define DATE_HPP_

#include <iostream>

class Date {
	friend std::ostream& operator <<(std::ostream& os, const Date& r);
	friend std::istream& operator >>(std::istream& is, Date& r);
private:
	int m_day, m_month, m_year;
	int m_dayOfWeek;
public:
	Date() {}
	Date(int day, int month, int year)
	{
		//...
		m_day = day;
		m_month = month;
		m_year = year;
	}
public:	
	//getters
	int getDay() const { return m_day; }
	int getMonth() const { return m_month; }
	int getYear() const { return m_year; }
	int getDayOfWeek() const { return m_dayOfWeek; }

	//setters
	void setDay(int value);
	void setMonth(int value);
	void setYear(int value);
};

#endif //DATE_HPP_

