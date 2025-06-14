cmake_minimum_required(VERSION 3.10)
project(SmartHome)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 指定所有源文件
set(SOURCES
    main.cpp
     device/Device.cpp
    # device/Sensor.cpp
    # device/Light.cpp
    # device/AirConditioner.cpp
    #factory/SensorFactory.cpp
    #factory/LightFactory.cpp
    #factory/ACFactory.cpp
)

# 头文件目录
include_directories(
    device
    factory
    container
    exception
    logger
    thread
    user
)

add_executable(SmartHome ${SOURCES})

# 如果你代码中用到了多线程支持（比如std::thread），链接线程库
# find_package(Threads REQUIRED)
# target_link_libraries(SmartHome PRIVATE Threads::Threads)
