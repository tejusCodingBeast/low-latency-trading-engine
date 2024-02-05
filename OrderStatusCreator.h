#ifndef ORDERSTATUSCREATOR_H
#define ORDERSTATUSCREATOR_H
#include "Order.h"
#include "ModifyOrderStatus.h"
#include "ModifyOrder.h"
#include "CancelOrderStatus.h"
#include "CancelOrder.h"

/*
Need to create a cpp implementation for this class and build out
the Generate functions for each order status type
*/


class OrderStatusCreator{
private:

public:
    OrderStatusCreator();
    ~OrderStatusCreator();
    CancelOrderStatus& GenerateCancelOrderStatus(CancelOrder cancel_order);
    NewOrderStatus& GenerateNewOrderStatus(Order order);
    ModifyOrder& GenerateModifyOrderStatus(ModifyOrder modify_order);

};

#endif