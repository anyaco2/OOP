#include "Software.h"
using namespace std;

void Software::display_header() const
{
	cout << "-------------------------------------------" << endl;
	cout << "Software" << endl;
	cout << "-------------------------------------------" << endl;
}

void Software::display_info() const
{
}

void Software::display() const
{
	display_header();
	cout << "Is system software exist?: " << SystemSoftware;
	cout << "Which one operating system?(if exist): " << OperatingSystem;
	display_info();
}


Software::~Software()
{
}

std::string Software::Is_SystemOperating() const
{
	return SystemSoftware;
}

std::string Software::get_OperatingSystem() const
{
	return OperatingSystem;
}

