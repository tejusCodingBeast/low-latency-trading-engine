#ifndef LIMIT_H
#define LIMIT_H
#include <list>
#include "OrderRecord.h"
#include "OrderbookEntry.h"
#include "Side.h"

using namespace std;
typedef unsigned int uint;

class Limit{
private:
    double price_;
    OrderbookEntry* head_;
    OrderbookEntry* tail_;

public:
    Limit(double price);
    OrderbookEntry* GetHead();
    bool IsEmpty();
    Side Side();

    // Getters 
    uint GetLevelOrderCount();
    uint GetLevelOrderQuantity();
    list<OrderRecord>* GetLevelOrderRecords();
    double GetPrice();
    OrderbookEntry* GetHead();
    OrderbookEntry* GetTail();
    
    // Setters
    void SetHead(OrderbookEntry* new_head);
    void SetTail(OrderbookEntry* new_tail);
};
#endif