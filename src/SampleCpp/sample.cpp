/*----------------------------------------------------------------------------------------------------------------------
	Aggregation ilişkisinin bir implementasyonu
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <cstring>

class Doctor {
private:
	char m_name[512];
	char m_citizenId[12];
	//...
public:
	Doctor(const char* name, const char* citizenId);

	const char* getName() const { return m_name; }
	const char* getCitizenId() const { return m_citizenId; }
	//...
};

Doctor::Doctor(const char* name, const char* citizenId)
{
	std::strcpy(m_name, name);
	std::strcpy(m_citizenId, citizenId);
}

class Hospital {
private:	
	constexpr static std::size_t ms_doctorsCount = 10;
	Doctor *m_doctors[ms_doctorsCount];
	std::size_t m_index = 0;

	//...
public:
	Hospital(/*...*/)
	{}
	Hospital(const Hospital&) = delete;
	Hospital& operator=(const Hospital&) = delete;
	~Hospital()
	{}
public:
	constexpr int getDoctorsCount() const { return m_index; }
public:
	void addDoctor(Doctor* doctor);
	Doctor* atDoctor(std::size_t index);
	//...
public:
	void displayDoctors();	
};


void Hospital::addDoctor(Doctor* doctor)
{
	m_doctors[m_index++] = doctor;
}

Doctor* Hospital::atDoctor(std::size_t index)
{
	return m_doctors[index];
}

void Hospital::displayDoctors()
{
	std::cout << "Toplam " << m_index << " tane doktor var\n";
	for (std::size_t i{}; i < m_index; ++i)		
		std::cout << m_doctors[i]->getCitizenId() << ", " << m_doctors[i]->getName() << '\n';	
}

int main()
{	
	Doctor d1{ "Ali", "12345678912" };
	Doctor d2{ "Veli", "12345678918" };
	Hospital hospital{/*...*/ };

	hospital.addDoctor(&d1);
	hospital.addDoctor(&d2);

	hospital.displayDoctors();

	auto pd = hospital.atDoctor(0);

	std::cout << pd->getCitizenId() << ", " << pd->getName() << '\n';

	return 0;
}
