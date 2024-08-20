#this a CMakelists.txt to blink a led with wiringPi library example
cmake_minimum_required(VERSION 3.13) #set the minium requirements for cmake.
project(Wpitest1)



add_executable(eng_blink eng_blink.cpp ) #makes the code  executeable.
# Now link libraries here:
target_link_libraries(blink  ${WIRINGPI_LIBRARIES} -lwiringPi) #links the wiringPi library to build the code

