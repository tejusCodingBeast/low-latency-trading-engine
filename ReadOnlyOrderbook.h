#ifndef READONLYORDERBOOK_H
#define READONLYORDERBOOK_H
#include "OrderbookSpread.h"

using namespace std;

// Pure Virtual
class ReadOnlyOrderbook{
    private:
    int count_;

    public:
    virtual bool ContainsOrder(double order_id) = 0;
    virtual OrderbookSpread* GetSpread() = 0;
};
#endif