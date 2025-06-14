#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>
#include <string>

class Device
{
private:
    int id;
    std::string name;
    int importance;
    double energyUsage;

public:
    Device(int id, std::string name, int importance, double energyUsage);
    virtual ~Device();
    virtual void updateStatus() = 0;

    int getID() const { return id; }
    std::string getName() const { return name; }
    double getenerageUsage() const { return energyUsage; }

    friend std::ostream &operator<<(std::ostream &os, const Device &d)
    {
        os << "[" << d.id << "] " << d.name << " | 重要度: " << d.importance << " | 能耗: " << d.energyUsage;
        return os;
    }
};
#endif
