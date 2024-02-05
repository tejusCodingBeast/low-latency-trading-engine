#ifndef REJECT_H
#define REJECT_H
#include "IOrderCore.h"
#include "RejectionReason.h"

class Reject: IOrderCore{
private:
    
public:
    Reject(IOrderCore* ordercore, RejectionReason rejection_reason);
    int GetOrderID();
    std::string GetUsername();
    int GetSecurityID();
};
#endif