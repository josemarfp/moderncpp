#include <ctime>
#include <iostream>

/*!
 * \brief Exemple to how to work with unix like timestamp
 * \fn void main_cpp_timestamp()
 */
void main_cpp_timestamp()
{
    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result))
              << result << " seconds since the Epoch\n";
}
