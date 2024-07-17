cmake_minimum_required(VERSION 3.22)
project(Glaze_exec)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_COMPILER clang++)

add_compile_options(-fbracket-depth=512)

add_executable(Glaze_exec main.cpp)

target_include_directories(Glaze_exec PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

set_target_properties(Glaze_exec PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
)
target_compile_options(Glaze_exec PRIVATE
    -Wall -Wextra -fno-limit-debug-info
    -Wno-missing-braces  # Disable warning for missing braces
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Enable testing if needed
# enable_testing()