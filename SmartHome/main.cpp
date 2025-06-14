#include "device/AirConditioner.h"
#include "device/Device.h"
#include "device/Light.h"
#include "device/Sensor.h"

#include "iostream"
using namespace std;

int main()
{
    //
    AirConditioner ac(1, "meidi", 1, 1);
    cout << "初始状态" << std::endl;
    cout << ac << endl;

    // 修改温度
    ac.setTemperature(23.5);
    cout << "current temperature" << ac.getTemperature() << endl;

    return 0;
}