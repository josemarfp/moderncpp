#ifndef CPP_TEMPLATE_HPP
#define CPP_TEMPLATE_HPP

using namespace std;

/*!
 * When using templates all implmentations must be on hpp file.
 *
 */
template <class T, class U>
T func_template(T a, U b)
{
    return (a<b?a:b);
}

template <class T, class U>
T func_template_func(T a, U b, T(*f)(T, U))
{
    return f(a, b);
}

#endif // CPP_TEMPLATE_HPP
