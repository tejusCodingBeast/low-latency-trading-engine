#ifndef MODIFYORDER_H
#define MODIFYORDER_H
#include "IOrderCore.h"
#include "CancelOrder.h"
#include "Order.h"

class ModifyOrder: IOrderCore{
    private:
    IOrderCore* ordercore_;
    int order_id_;
    int username_;
    int security_id_;
    double price_;
    int quantity_;
    bool is_buy_side_;
    
    public:
    ModifyOrder(IOrderCore* ordercore, double modify_price, int modify_quantity, bool is_buy_side);
    CancelOrder& ToCancelOrder();
    Order& ToNewOrder();

};

#endif