#include <iostream>
#include <set>

int main() {
    std::set<int> s = {10, 20, 30, 40, 50};

    int value = 40;

    auto lower = s.lower_bound(value);
    auto upper = s.upper_bound(value);

    if (lower != s.end()) {
        std::cout << "Lower bound of " << value << ": " << *lower << std::endl;
    } else {
        std::cout << "Lower bound of " << value << ": not found" << std::endl;
    }

    if (upper != s.end()) {
        std::cout << "Upper bound of " << value << ": " << *upper << std::endl;
    } else {
        std::cout << "Upper bound of " << value << ": not found" << std::endl;
    }

    return 0;
}
