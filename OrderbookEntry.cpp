#ifndef ORDERBOOKENTRY_CPP
#define ORDERBOOKENTRY_CPP
#include "Order.h"
#include "OrderbookEntry.h"

using namespace std;

// Constructor
OrderbookEntry::OrderbookEntry(Order* order, Limit* parent_limit): 
                            current_order_(order), parent_limit_(parent_limit),
                            next_(nullptr), previous_(nullptr){
    // Convert to local time
    std::time_t currentTime = std::time(nullptr);
    creation_time_ = std::localtime(&currentTime);
}

// Getters    
tm* OrderbookEntry::GetCreationTime(){
    return creation_time_;
}

Order* OrderbookEntry::GetCurrentOrder(){
    return current_order_;
}

OrderbookEntry* OrderbookEntry::GetNext(){
    return next_;
}

Limit* OrderbookEntry::GetParentLimit(){
    return parent_limit_;
}

OrderbookEntry* OrderbookEntry::GetPrevious(){
    return previous_;
}

// Setters
void OrderbookEntry::SetNext(OrderbookEntry* next){
    next_ = next;
}

void OrderbookEntry::SetPrevious(OrderbookEntry* previous){
    previous_ = previous;
}

#endif