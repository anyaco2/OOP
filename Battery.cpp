#include "Battery.h"

void Battery::display_header() const
{
	cout << "------------------------------------" << endl;
	cout << "Battery" << endl;
	cout << "-------------------------------------------" << endl;
}

void Battery::display_info() const
{
	cout << "Type of electricity: " << battery_type << "\n";
	cout << "Size of battery/power of electricity: " << battery_size << " " << "\n";

}

void Battery::display()const {

	hardware::display();

}

string Battery::get_battery_type()const
{
	return battery_type;
}

double Battery::get_battery_size()const
{
	return battery_size;
}