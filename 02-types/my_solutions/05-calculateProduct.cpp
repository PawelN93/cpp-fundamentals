#include <iostream>
#include <memory>

std::shared_ptr<int> calculateProduct(int x, int y)
{
    std::shared_ptr<int> ptr = std::make_shared<int>(x * y);
    // auto ptr = std::make_shared<int>(x * y);
    std::cout << "Inside function\n";
    std::cout << "Num: " << *ptr << " | owners: " << ptr.use_count() << "\n";

    return ptr;
}

int main()
{
    auto number = calculateProduct(10, 20);
    std::cout << "Inside main before reset\n";
    std::cout << "Num: " << *number << " | owners: " << number.use_count() << "\n";
/*
    number.reset();
    std::cout << "Inside main after reset\n";
    std::cout << "Num: " << *number << " | owners: " << number.use_count() << "\n";
*/
    return 0;
}