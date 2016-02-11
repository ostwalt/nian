#include <iostream>
#include <vector>
#include <string>

template<typename T, typename U>
class MagicType {
public:
    T dark;
    U magic;
};

// illegal
// template<typename T>
// typedef MagicType<std::vector<T>, std::string> FakeDarkMagic;

typedef int (*process)(void *);
using NewProcess = int(*)(void *);
template<typename T>
using TrueDarkMagic = MagicType<std::vector<T>, std::string>;

int main() {
    // FakeDarkMagic<bool> me;
    TrueDarkMagic<bool> you;
}
