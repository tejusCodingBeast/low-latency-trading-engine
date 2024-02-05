#ifndef CANCELORDER_H
#define CANCELORDER_H
#include "IOrderCore.h"

class CancelOrder: IOrderCore{
private:
    IOrderCore* ordercore_;

public:
    CancelOrder(IOrderCore* ordercore);
    ~CancelOrder();
    int GetOrderID();
    std::string GetUsername();
    int GetSecurityID();

};

#endif