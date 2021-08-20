set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)


add_executable(Qalculator
        main.cpp
        gui/mainwindow.cpp
        gui/mainwindow.ui
        lib/arithmeticoperation.h
        lib/arithmeticoperation.cpp
        )

target_include_directories(Qalculator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(Qalculator PUBLIC
        Qt5::Core
        Qt5::Widgets
)
