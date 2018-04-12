#include <iostream>
#include "cpp_timestamp.hpp"
#include "cpp_template.hpp"

using namespace std;

/*!
 * \brief Menu to chose which flow to see
 * \fn int main()
 * \return always 0
 */
int main()
{
    int choosen{};

    do
    {
        cout << "Choose desired flow:" << endl;
        cout << "0 - Exit" << endl;
        cout << "1 - Timestamp" << endl;
        cout << "2 - Template" << endl;
        cout << "3 - Template function parameter" << endl;
        cin >> choosen;

        switch (choosen)
        {
            case 1:
                main_cpp_timestamp();
                break;
            case 2:
            {
                int a {1};
                long b {2};
                int c = func_template(a, b);
                cout << "C++ Function template" << endl;
                cout << c << endl;
                break;
            }
            case 3:
            {
                int a {1};
                long b {2};
                int c = func_template_func(a, b, func_template);
                cout << "C++ Function template" << endl;
                cout << c << endl;
                break;
            }
            default:
                break;
        }
    } while (choosen != 0);

    return 0;
}
