cmake_minimum_required(VERSION 3.0.0)
project(TradingEngine VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

# Add the Order class files to your project
add_library(Order IOrderCore.h OrderCore.cpp Order.cpp ModifyOrder.cpp 
CancelOrder.cpp Reject.cpp OrderRecord.cpp)
target_include_directories(Order PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link the Dog library to your main executable
add_executable(TradingEngine main.cpp)
target_link_libraries(TradingEngine PRIVATE Order)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
