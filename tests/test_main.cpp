#include <cassert>
#include <iostream>

auto add(int x, int y)->int;

int main(){
    assert(add(1, 2) == 3);
    assert(add(-3, -2) == -5);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
