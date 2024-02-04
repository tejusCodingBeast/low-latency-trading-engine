#ifndef ORDERBOOKENTRY_H
#define ORDERBOOKENTRY_H
#include <ctime>
#include "Order.h"
#include "Limit.h"

using namespace std;

class Limit;

class OrderbookEntry{
    private:
    tm* creation_time_; // tm struct from <ctime> class
    Order current_order_;
    Limit* parent_limt_;
    OrderbookEntry* next_;
    OrderbookEntry* previous_;
    
    public:
    OrderbookEntry();
    Order* GetCurrentOrder();
    OrderbookEntry* GetNext();
    OrderbookEntry* GetPrevious();
};
#endif