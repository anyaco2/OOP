#include "Memory.h"
#include <iostream>


void Memory::display_header() const
{
	cout << "------------------------------------" << endl;
	cout << "Memory" << endl;
	cout << "-------------------------------------------" << endl;

}

void Memory::display_info() const
{
	cout << "Type of memory: " << memory_type << "\n";
	cout << "Size of memory: " << memory_size << " " << memory_sizebyte << "\n";

}

void Memory::display()const {
	hardware::display();

}

string Memory::get_memory_type() const
{
	return memory_type;
}

double Memory::get_memory_size() const
{
	return memory_size;
}

string Memory::get_memory_sizebyte()const
{
	return memory_sizebyte;
}
