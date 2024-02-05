#ifndef ORDERBOOKENTRY_H
#define ORDERBOOKENTRY_H
#include <ctime>
#include "Order.h"
#include "Limit.h"

using namespace std;

class Limit;

class OrderbookEntry{
private:
    tm* creation_time_; // tm struct * from <ctime> class
    Order* current_order_;
    Limit* parent_limit_;
    OrderbookEntry* next_;
    OrderbookEntry* previous_;
    
public:
    // Constructor
    OrderbookEntry(Order* order, Limit* parent_limit);

    // Getters
    Order* GetCurrentOrder();
    tm* GetCreationTime();
    OrderbookEntry* GetNext();
    Limit* GetParentLimit();
    OrderbookEntry* GetPrevious();

    // Setters
    void SetNext(OrderbookEntry* next);
    void SetPrevious(OrderbookEntry* previous);
};
#endif