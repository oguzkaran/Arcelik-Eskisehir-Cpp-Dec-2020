#include "HumanResources.hpp"
#include <iostream>

void HumanResources::payInsurance(const Employee & r)
{
	using namespace std;

	cout << r.getName() << ", " << r.getCitizenId() << "==>" << r.calculateInsurance() << '\n';
	
	//...

	cout << "////////////////\n";
}


