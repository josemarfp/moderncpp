#ifndef CPP_MAP_HPP
#define CPP_MAP_HPP

#include <map>

using namespace std;

/*!
 * \brief Sample of keep top n elements, ordered by a double
 * \return
 */
template <typename T>
void map_ordering (T& myMap)
{
    myMap[1.1] = 6;
    myMap[3.1] = 5;
    myMap[2.1] = 7;
    myMap[0.1] = 1;
    myMap[4.1] = 10;

    map<double, int>::iterator it = myMap.end();
    advance(it, -3);

    it = myMap.erase(myMap.begin(), it);
}

#endif // CPP_MAP_HPP
