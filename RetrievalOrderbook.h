#ifndef RETRIEVALORDERBOOK_H
#define RETRIEVALORDERBOOK_H
#include "OrderbookEntry.h"
#include "OrderEntryOrderbook.h"
#include <list>

using namespace std;

// Pure Virtual
class RetrievalOrderbook: OrderEntryOrderbook{
    private:

    public:
    virtual list<OrderbookEntry>* GetAskOrders() = 0;
    virtual list<OrderbookEntry>* GetBidOrders() = 0;
};
#endif