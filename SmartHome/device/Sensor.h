#ifndef SENSOR_H
#define SENSOR_H

#include "Device.h"

class Sensor : public Device
{
public:
    Sensor(int id, std::string name, int importance, double energyUsage, double temperature = 25.0, double humidity = 50.0, double co2 = 0.03)
        : Device(id, name, importance, energyUsage), temperature(temperature), humidity(humidity), co2(co2)
    {
    }

    void updateStatus()
    {
        temperature += 0.1;
        humidity += 0.2;
        co2 += 0.01;
    }

    double getTemperature() const { return temperature; }
    double getCO2() const { return co2; }

    friend std::ostream &operator<<(std::ostream &os, const Sensor &s)
    {
        os << static_cast<const Device &>(s) << " | 温度: " << s.temperature << " | 湿度: " << s.humidity << " | CO2: " << s.co2;
        return os;
    }

private:
    double temperature;
    double humidity;
    double co2;
};

#endif