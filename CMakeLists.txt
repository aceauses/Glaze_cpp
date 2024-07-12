cmake_minimum_required(VERSION 3.22)
project(Glaze)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_COMPILER clang++)

add_executable(Glaze main.cpp)

target_include_directories(Glaze PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

set_target_properties(Glaze PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
)

target_compile_options(Glaze PRIVATE
    -Wall -Wextra -fno-limit-debug-info
    -Wno-missing-braces  # Disable warning for missing braces
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Enable testing if needed
# enable_testing()