cmake_minimum_required(VERSION 3.16)

project(Qalculator)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set(QT_LIBS Qt5::Core Qt5::Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

set(SRC src/main.cpp src/gui/mainwindow.cpp resources/mainwindow.ui)

add_executable(Qalculator ${SRC})

qt5_wrap_ui(${SRC} resources/mainwindow.ui)

target_include_directories(Qalculator PUBLIC src/gui)
target_link_libraries(Qalculator Qt5::Widgets)

include_directories(${CMAKE_SOURCE_DIR}/src/gui)

add_subdirectory(src)
