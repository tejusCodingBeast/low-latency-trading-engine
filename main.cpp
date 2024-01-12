#include <iostream>
// #include "Dog.h"
#include "OrderCore.h"
#include "Order.h"

int main(int, char**){
    std::cout << "Hello, from Trading_Engine!\n";
    // Dog myDog;
    // myDog.bark();

    IOrderCore* ioc = new OrderCore(1,"nsaurino", 42); // Creating a ordercore Object

    Order order(ioc, 100, 10, true);

    std::cout << order.ToString() << std::endl;

    return 0;
}
