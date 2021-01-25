#ifndef TEMPERATURE_HPP_
#define TEMPERATURE_HPP_

namespace com {
	namespace arcelik {
		class Temperature {
			friend Temperature operator-(int value, const Temperature& r);
			friend Temperature operator+(int value, const Temperature& r);
		private:
			int m_value;
		public:
			explicit Temperature(int value = 0) : m_value{ value }
			{}
		public:
			void setValue(int value);
			int getValue() const { return m_value; }
			Temperature operator+(const Temperature& other) const;
			Temperature operator+(int value) const;
			Temperature operator-(const Temperature& other) const;
			Temperature operator-(int value) const;

			explicit operator double() const;
			explicit operator int() const;

			Temperature& operator ++();
			Temperature operator ++(int);

			Temperature& operator --();
			Temperature operator --(int);

			Temperature operator +=(const Temperature& r);
		};
	}
}

#endif //TEMPERATURE_HPP_
