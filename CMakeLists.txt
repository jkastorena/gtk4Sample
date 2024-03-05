cmake_minimum_required ( VERSION 3.20 )

project( datastor )

add_executable ( datastor main.c)

find_package ( PkgConfig REQUIRED)
PKG_CHECK_MODULES( GTK REQUIRED IMPORTED_TARGET gtk4 )

target_link_libraries( 
    ${PROJECT_NAME}
    ${GTK_LIBRARIES}
)


include_directories(
    include
    ${GTK_INCLUDE_DIRS}
)