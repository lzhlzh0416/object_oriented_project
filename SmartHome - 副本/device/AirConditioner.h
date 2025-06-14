// device/AirConditioner.h
#ifndef AIRCONDITIONER_H
#define AIRCONDITIONER_H

#include "Device.h"

class AirConditioner : public Device
{
private:
    double setTemp;
    int windLevel;

public:
    AirConditioner(int id, std::string name, int importance, double energyUsage, double setTemp = 26.0, int windLevel = 1)
        : Device(id, name, importance, energyUsage), setTemp(setTemp), windLevel(windLevel)
    {
    }

    void updateStatus() override
    {
        // 模拟风量调节
        windLevel = (windLevel % 3) + 1;
    }

    void setTemperature(double t) { setTemp = t; }
    double getTemperature() const { return setTemp; }

    friend std::ostream &operator<<(std::ostream &os, const AirConditioner &ac)
    {
        os << static_cast<const Device &>(ac) << " | 设定温度: " << ac.setTemp << " | 风量: " << ac.windLevel;
        return os;
    }
};

#endif
