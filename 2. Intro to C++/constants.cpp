#include <iostream>
#include <vector>

int sum(const std::vector<int> &v)
{
    int sum = 0;
    for(int i : v)
        sum += i;
    return sum;
}
// A common usage of const is to guard against 
// accidentally changing a variable, especially when it is passed-by-reference as a function argument.

/* 
The distinction between const and constexpr is subtle.
In general, though, const is much more common than constexpr.
When in doubt, use const, especially to guard against accidentally modifying a variable.
*/

int main()
{
    std::vector<int> v {0, 1, 2, 3, 4};
    std::cout << sum(v) << "\n";
}