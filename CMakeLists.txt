cmake_minimum_required(VERSION 3.22)
project(Glaze_exec)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

# Fetch Glaze
FetchContent_Declare(
  glaze
  GIT_REPOSITORY https://github.com/stephenberry/glaze.git
  GIT_TAG main
  GIT_SHALLOW TRUE
)

# Fetch nlohmann/json
FetchContent_Declare(
  json
  GIT_REPOSITORY https://github.com/nlohmann/json.git
  GIT_TAG v3.11.3
)

FetchContent_MakeAvailable(glaze json)

find_package(Boost REQUIRED COMPONENTS system)

add_executable(Glaze_exec main.cpp)

target_include_directories(Glaze_exec PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${Boost_INCLUDE_DIRS}
)

target_link_libraries(Glaze_exec PRIVATE
    Boost::boost
    Boost::system
    glaze::glaze
    nlohmann_json::nlohmann_json
)

set_target_properties(Glaze_exec PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
)

# Compiler-specific options
if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    target_compile_options(Glaze_exec PRIVATE
        -Wall -Wextra
        -fbracket-depth=1024
        -fno-limit-debug-info
        -Wno-missing-braces
    )
elseif(CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    target_compile_options(Glaze_exec PRIVATE
        -Wall -Wextra
        -Wno-missing-braces
    )
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Enable testing if needed
# enable_testing()