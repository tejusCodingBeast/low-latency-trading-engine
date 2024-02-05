#ifndef ORDERENTRYORDERBOOK_H
#define ORDERENTRYORDERBOOK_H
#include "ReadOnlyOrderbook.h"
#include "Order.h"
#include "ModifyOrder.h"
#include "CancelOrder.h"

using namespace std;

// Pure Virtual
class OrderEntryOrderbook: ReadOnlyOrderbook{
    private:

    public:
    void AddOrder(Order order);
    void ChangeOrder(ModifyOrder modify_order);
    void RemoveOrder(CancelOrder cancel_order);
    void CancelAll();
};

#endif