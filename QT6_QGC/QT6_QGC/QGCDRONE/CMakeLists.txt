cmake_minimum_required(VERSION 3.5)

project(QGCDRONE VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets MultimediaWidgets)

# find library vlc
find_library(VLC_LIBRARY libvlc)

set(PROJECT_SOURCES
        main.cpp
        widget.cpp
        widget.h
        streamingvideo.cpp
        streamingvideo.h
        joystickbuttons.cpp
        joystickbuttons.h
        ICentralLine.h
        navbar.cpp
        navbar.h
        icons.qrc
        navbar.qrc

)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(QGCDRONE
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET QGCDRONE APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(QGCDRONE SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(QGCDRONE
            ${PROJECT_SOURCES}
        )
    endif()
endif()
# include vlc header

target_link_libraries(QGCDRONE PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::MultimediaWidgets ${VLC_LIBRARY})

set_target_properties(QGCDRONE PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS QGCDRONE
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(QGCDRONE)
endif()
