#include "cpp_template.hpp"

template <class T, class U>
T func_template(T a, U b)
{
    return (a<b?a:b);
}
