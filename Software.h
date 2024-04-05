#pragma once
#include <iostream>
#include <string>
class Software {
private:
	std::string SystemSoftware;
	std::string OperatingSystem;
protected:
	virtual void display_header()const;
	virtual void display_info()const;
public:
	Software(std::string SystemSoftware1, std::string OperatingSystem1) {
		SystemSoftware = SystemSoftware1;
		OperatingSystem = OperatingSystem1;
	};
	Software(const Software& other) : Software(other.SystemSoftware, other.OperatingSystem)
	{
	};
	~Software();
	virtual std::string Is_SystemOperating()const;
	virtual std::string get_OperatingSystem()const;
	virtual void display()const;
};
