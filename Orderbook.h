#ifndef ORDERBOOK_H
#define ORDERBOOK_H
#include "RetrievalOrderbook.h"
#include "OrderbookEntry.h"
#include "Limit.h"
#include <set>
#include <map>

using namespace std;

class Orderbook: RetrievalOrderbook{
    private:
    int count_;
    // Security instrument_; // Do I need to create a security class?
    set<Limit> ask_limits_;
    set<Limit> bid_limits_;
    map<double, OrderbookEntry> orders_;
    static void AddOrder(Order, Limit, set<Limit>, map<double, OrderbookEntry>);

    public:
    //Orderbook(Security instrument);
    Orderbook();
    bool ContainsOrder(double order_id);
    void AddOrder(Order order);
    void ChangeOrder(ModifyOrder modify_order);
    void RemoveOrder(CancelOrder cancel_order);
    void CancelAll();
    list<OrderbookEntry>* GetAskOrders();
    list<OrderbookEntry>* GetBidOrders();
    OrderbookSpread* GetSpread();
};
#endif