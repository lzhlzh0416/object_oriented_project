#ifndef LIGHT_H
#define LIGHT_H

#include "Device.h"

class Light : public Device
{
private:
    int brightness;
    bool isOn;

public:
    Light(int id, std::string name, int importance, double energyUsage, int brightness = 50, bool isOn = false) : Device(id, name, importance, energyUsage) {}

    void updateStatus() { isOn = !isOn; }
    void turnOn() { isOn = true; }
    void turnOff() { isOn = false; }

    friend std::ostream &operator<<(std::ostream &os, const Light &l)
    {
        os << static_cast<const Device &>(l) << " | 亮度: " << l.brightness << " | 状态: " << (l.isOn ? "开" : "关");
        return os;
    }

    ~Light();
};

#endif