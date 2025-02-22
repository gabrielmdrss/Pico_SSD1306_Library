# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Initialise pico_sdk from installed location
# (note this can come from environment, CMake cache etc)

# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(sdkVersion 2.1.1)
set(toolchainVersion 13_3_Rel1)
set(picotoolVersion 2.1.1)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()
# ====================================================================================
set(PICO_BOARD pico_w CACHE STRING "Board type")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(ssd1306_Lib C CXX ASM)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

# Add executable. Default name is the project name, version 0.1

add_executable(ssd1306_Lib
        main.c
        ssd1306/ssd1306.c
        ssd1306/ssd1306_fonts.c
        )

pico_set_program_name(ssd1306_Lib "ssd1306_i2c")
pico_set_program_version(ssd1306_Lib "0.1")
        

# pull in common dependencies and additional i2c hardware support
target_link_libraries(ssd1306_Lib 
        pico_stdlib
        hardware_i2c 
        )

pico_enable_stdio_usb(ssd1306_Lib 1)
pico_enable_stdio_uart(ssd1306_Lib 0)

# create map/bin/hex file etc.
pico_add_extra_outputs(ssd1306_Lib)

# add url via pico_set_program_url
