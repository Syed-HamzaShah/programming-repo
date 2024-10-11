template <class genType>
class genClass
{
public:
    genType storage[50];
};

#include <iostream>

int main()
{
    genClass<int> intStorage;
    genClass<double> doubleStorage;
    genClass<std::string> stringStorage;

    intStorage.storage[0] = 42;
    doubleStorage.storage[1] = 3.14;
    stringStorage.storage[2] = "Hello, world!";

    std::cout << intStorage.storage[0] << std::endl;
    std::cout << doubleStorage.storage[1] << std::endl;
    std::cout << stringStorage.storage[2] << std::endl;

    return 0;
}