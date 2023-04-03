cmake_minimum_required(VERSION 3.5)

project(guiCustom VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets WebEngineWidgets)
set(QWT_LIBRARY_DIR /home/eurolink/qwt-6.2.0/lib/libqwt.so.6.2.0)

set(QT_PLUGIN_PATH /usr/local/qwt-6.2.0/plugins/designer/libqwt_designer_plugin.so)

set(PROJECT_SOURCES
        main.cpp
        widget.cpp
        widget.h
        navbar.cpp
        navbar.h
        navbar.qrc
        joystickcontrolmain.cpp
        joystickcontrolmain.h
        joystick.qrc
        general.qrc
        compass.qrc
        registration.cpp
        registration.h
        signinpage.cpp
        signinpage.h
        signinpage.ui
        signuppage.cpp
        signuppage.h
        signuppage.ui
        myprofregistration.cpp
        myprofregistration.h
        myprofregistration.ui
        dronetypes.h
        dronetypes.cpp
        dronetypes.ui
        huddisplay.cpp
        huddisplay.h
        huddisplay.ui
        pippo.ui

        widget.ui

)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(guiCustom
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET guiCustom APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(guiCustom SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(guiCustom
            ${PROJECT_SOURCES}
        )
    endif()
endif()

include_directories(/usr/local/qwt-6.2.0/include)

target_link_libraries(guiCustom PRIVATE Qt${QT_VERSION_MAJOR}::Widgets ${QWT_LIBRARY_DIR} Qt${QT_VERSION_MAJOR}::WebEngineWidgets)

set_target_properties(guiCustom PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS guiCustom
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(guiCustom)
endif()
