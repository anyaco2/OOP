#pragma once
#include <iostream>
#include <string>
class Software {
private:
	string SystemSoftware;
	string OperatingSystem;
protected:
	virtual void display_header()const;
	virtual void display_info()const;
public:
	Software(string SystemSoftware1, string OperatingSystem1) {
		SystemSoftware = SystemSoftware1;
		OperatingSystem = OperatingSystem1;
	};
	Software(const Software& other) : Software(other.SystemSoftware, other.OperatingSystem)
	{
	};
	~Software();
	virtual string Is_SystemOperating()const;
	virtual string get_OperatingSystem()const;
	virtual void display()const;
};