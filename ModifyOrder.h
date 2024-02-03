#ifndef MODIFYORDER_H
#define MODIFYORDER_H
#include "IOrderCore.h"
#include "CancelOrder.h"
#include "Order.h"

class ModifyOrder: IOrderCore{
    private:
    IOrderCore* ordercore_;
    double price_;
    int quantity_;
    bool is_buy_side_;
    
    public:
    ModifyOrder(IOrderCore* ordercore, double modify_price, int modify_quantity, bool is_buy_side);
    int GetOrderID() const;
    std::string GetUsername() const;
    int GetSecurityID() const;
    double GetPrice() const;
    int GetQuantity() const;
    bool GetIsBuySide() const;
    CancelOrder& ToCancelOrder();
    Order& ToNewOrder();
};

#endif