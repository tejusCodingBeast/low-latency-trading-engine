#ifndef ORDER_H
#define ORDER_H
#include "IOrderCore.h"

class Order: public IOrderCore{
    private:
    double price_;
    int quantity;
    bool is_buy_side_;
    IOrderCore* ordercore_;
    int initial_quantity_;
    int current_quantity_;

    protected:

    public:
    // Constructors
    Order(const IOrderCore* ordercore, const int order_id, const std::string username, const int security_id);
    Order(/*ModifyOrder mo*/);
    
    // Member Functions
    int GetOrderID() const;
    std::string GetUsername() const;
    int GetSecurityID() const;
    // void IncreaseQuantity(const uint quantity_delta);
    // void DecreaseQuantity(const uint quantity_delta);
};

#endif