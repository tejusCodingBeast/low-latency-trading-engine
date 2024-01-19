#ifndef CANCELORDER_H
#define CANCELORDER_H
#include "IOrderCore.h"

class CancelOrder: IOrderCore{
    private:
    IOrderCore* ordercore_;
    int order_id_;
    int username_;
    int security_id_;

    public:
    CancelOrder(IOrderCore* ordercore);
    int GetOrderID();
    int GetUsername();
    int GetSecurityID();

};

#endif