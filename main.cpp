#include <iostream>
#include <set>

int main() {
    size_t count = 0;
    std::cin >> count;

    std::set<int, std::greater<int>> result;
    int value;
    while (count > 0) {
        std::cin >> value;
        result.insert(value);
        --count;
    }

    for (int val : result) {
        std::cout << val << '\n';
    }
    return 0;
}
