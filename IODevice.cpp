#include "IODevice.h"

void IODevice::display()const {

	hardware::display();
	Software::display();

}

string IODevice::get_IODevice_type()const
{
	return IODevice_type;
}

string IODevice::get_IODevice_function()const
{
	return IODevice_function;
}
void IODevice::display_header() const
{
	cout << "------------------------------------" << endl;
	cout << "IODevice" << endl;
	cout << "-------------------------------------------" << endl;
}

void IODevice::display_info() const
{
	cout << "Input / output: " << IODevice_type << "\n";
	cout << "Function of hardware: " << IODevice_function << " " << "\n";
}
