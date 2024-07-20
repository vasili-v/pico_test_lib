cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(pico_test_lib C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_executable(pico_test_lib
	main.c
)

pico_enable_stdio_usb(pico_test_lib 1)
pico_enable_stdio_uart(pico_test_lib 0)

pico_add_extra_outputs(pico_test_lib)

target_link_libraries(pico_test_lib pico_stdlib)
