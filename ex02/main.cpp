#include "A.h"
#include "B.h"
#include "C.h"
#include <time.h>
#include <cstdlib>
#include <iostream>

Base * generate(void)
{
    int     num = std::rand() % 3;
    Base*   ret;

    switch (num)
    {
        case 0:
            ret = new A;
            break; 
        case 1:
            ret = new B;
            break; 
        case 2:
            ret = new C;
            break; 
    }
    return ret;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != NULL) {
        std::cout << "This is A!" << std::endl;
        return;
    }
    if (dynamic_cast<B*>(p) != NULL) {
        std::cout << "This is B!" << std::endl;
        return;
    }
    if (dynamic_cast<C*>(p) != NULL) {
        std::cout << "This is C!" << std::endl;
        return;
    }
    std::cout << "It has nothing to do with the base." << std::endl;
}

void identify(Base& p)
{
    uintptr_t   address;

    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "This is A!" << std::endl;
        address =  reinterpret_cast<uintptr_t>(&a);
    }
    catch (std::bad_cast& e) {
        try {
            B& b = dynamic_cast<B&>(p);
            std::cout << "This is B!" << std::endl;
            address =  reinterpret_cast<uintptr_t>(&b);
        }
        catch (std::bad_cast& e) {
            try {
                C& c = dynamic_cast<C&>(p);
                std::cout << "This is C!" << std::endl;
                address = reinterpret_cast<uintptr_t>(&c);
            }
            catch (std::bad_cast& e) {
                std::cout << "It has nothing to do with the base." << std::endl;
            }
        }
    }
    std::cout << std::hex << std::uppercase << address << std::endl;
}

int main()
{
    std::srand(static_cast<unsigned int>(time(NULL)));

    Base*   base = generate();

    identify(base);
    identify(*base);

    delete base;
}
