cmake_minimum_required(VERSION 3.14)

project(38_1Lesson22 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets WebEngineWidgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets WebEngineWidgets)


add_executable(38_1Lesson22
  main.cpp
  
)
target_link_libraries(38_1Lesson22 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets )
target_link_libraries(38_1Lesson22 PRIVATE Qt${QT_VERSION_MAJOR}::WebEngineCore )
target_link_libraries(38_1Lesson22 PRIVATE Qt${QT_VERSION_MAJOR}::WebEngineWidgets )

install(TARGETS 38_1Lesson22
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
