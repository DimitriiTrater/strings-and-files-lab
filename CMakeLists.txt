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
    
    "src/from_arab_to_roman/from_arab_to_roman.cpp" "src/from_arab_to_roman/from_arab_to_roman.hpp"
    
    "src/arithmetic_expression/arith_ex.cpp" "src/arithmetic_expression/arith_ex.hpp"
    
    "src/play_with_path/pwp.cpp" "src/play_with_path/pwp.hpp"
    
    "src/string_substring/str_substr.cpp" "src/string_substring/str_substr.hpp"

    "src/repl_symb/repl.cpp" "src/repl_symb/repl.hpp"

    "src/translit/translit.cpp" "src/translit/translit.hpp"

    "src/regex_searching/regex_searching.cpp" "src/regex_searching/regex_searching.hpp"

    "src/setString.cpp" "src/setString.hpp"

    
    )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
