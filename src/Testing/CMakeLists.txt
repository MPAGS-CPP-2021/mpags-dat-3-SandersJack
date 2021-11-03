add_executable(testHello testHello.cpp)
add_test(NAME test-hello COMMAND testHello)

add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CMAKE_CURRENT_LIST_DIR})
target_compile_features(Catch INTERFACE cxx_noexcept)

add_executable(testCatch testCatch.cpp)
target_include_directories(testCatch PRIVATE ${CMAKE_CURRENT_LIST_DIR})
add_test(NAME test-catch COMMAND testCatch)

add_executable(testTransformChar testTransformChar.cpp)
target_include_directories(testCatch PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(testTransformChar MPAGSCipher)
add_test(NAME test-Transformchar COMMAND testTransformChar)