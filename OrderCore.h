#ifndef ORDERCORE_H
#define ORDERCORE_H
#include "IOrderCore.h"

class OrderCore: public IOrderCore{
private:


public:
    // Constructors
    OrderCore(const int order_id, const std::string username, const int security_id);

    // Member Functions
    int GetOrderID() const;
    std::string GetUsername() const;
    int GetSecurityID() const;

};

#endif