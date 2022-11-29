cmake_minimum_required(VERSION 3.0.0)
project(strings-and-files VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(
    strings-and-files 
    
    "main.cpp" "include.hpp"

    "src/lucky_or_unlucky/lucky_or_unlucky.cpp" "src/lucky_or_unlucky/lucky_or_unlucky.hpp"

    "src/cipher_ceaser/cipher.cpp" "src/cipher_ceaser/cipher.hpp"
    
    "src/palindrome/palindrome.cpp" "src/palindrome/palindrome.hpp"
    
    )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
