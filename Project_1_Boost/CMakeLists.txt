# src/CMakeLists.txt
# Добавьте исполняемый файл для вашего основного проекта
add_executable(myprog main.cpp bar.cpp)


# Свяжите библиотеки Boost и Google Test
target_link_libraries(myprog Boost::asio Boost::regex Boost::algorithm gtest_main)
