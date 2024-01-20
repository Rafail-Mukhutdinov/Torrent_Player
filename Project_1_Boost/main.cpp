
// Подключаем заголовочный файл библиотеки Boost
#include <boost/version.hpp>
// Подключаем заголовочный файл для ввода-вывода
#include <iostream>
// Используем стандартное пространство имен
using namespace std;
// Объявляем функцию main
int main() {
  // Выводим значение макроса BOOST_VERSION на экран
  cout << "Boost version: " << BOOST_VERSION << endl;
  // Завершаем программу
  return 0;
}
