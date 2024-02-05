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
    virtual void AddOrder(Order order) = 0;
    virtual void ChangeOrder(ModifyOrder modify_order) = 0;
    virtual void RemoveOrder(CancelOrder cancel_order) = 0;
    virtual void CancelAll() = 0;
};

#endif