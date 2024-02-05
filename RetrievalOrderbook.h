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
    list<OrderbookEntry>* GetAskOrders();
    list<OrderbookEntry>* GetBidOrders();
};
#endif