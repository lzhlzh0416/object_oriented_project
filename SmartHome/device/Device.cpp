#include "Device.h"

Device::Device(int id, std::string name, int importance, double energyUsage)
    : id(id), name(name), importance(importance), energyUsage(energyUsage) {}


Device::~Device() {}
