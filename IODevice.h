#pragma once
#include "hardware.h"
#include "Software.h"
class IODevice :
    public hardware, public Software
{
private:
    string IODevice_function;
    string IODevice_type;


protected:
    virtual void display_header()const override;
    virtual void display_info()const override;
public:
    IODevice(const char* name1, string model1, double price1, Country country1, string SystemSoftware1, string OperatingSystem1, string IODevice_function1, string IODevice_type1) :hardware(name1, model1, price1, country1), Software(SystemSoftware1, OperatingSystem1) {
        IODevice_function = IODevice_function1;
        IODevice_type = IODevice_type1;
    };
    IODevice(const IODevice& other) :hardware(other), Software(other) {
        IODevice_function = other.IODevice_function;
        IODevice_type = other.IODevice_type;
    };


    virtual void display()const override;
    string get_IODevice_function()const;
    string get_IODevice_type()const;

};

