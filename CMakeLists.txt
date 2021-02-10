cmake_minimum_required(VERSION 3.10)
project(QRadioButtonTest CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

add_executable(QRadioButtonTest
    main.cpp
    MainWindow.h
    MainWindow.cpp
    ViewField.h
    ui_ViewField.h
)

target_link_libraries(QRadioButtonTest
    PRIVATE
        Qt5::Core
        Qt5::Widgets
)