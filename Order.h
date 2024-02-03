#ifndef ORDER_H
#define ORDER_H
#include "IOrderCore.h"
#include <string>

// Forward declaration of ModifyOrder
class ModifyOrder;

class Order: public IOrderCore{
    private:
    IOrderCore* ordercore_;
    double price_;
    bool is_buy_side_;
    int initial_quantity_;
    int current_quantity_;

    protected:

    public:
    // Constructors
    Order(IOrderCore* ordercore, const double price, const int quantity, const bool is_buy_side);
    Order(ModifyOrder* modify_order);
    ~Order();
    
    // Member Functions
    void SetPrice(const double price);
    void SetIsBuySide(const bool is_buy_side);
    void SetCurrentQuantity(const int quantity);
    int GetOrderID() const;
    std::string GetUsername() const;
    int GetSecurityID() const;
    double GetPrice() const;
    bool GetIsBuySide() const;
    int GetInitialQuantity() const;
    int GetCurrentQuantity() const;
    void IncreaseQuantity(const uint quantity_delta);
    void DecreaseQuantity(const uint quantity_delta);
    std::string ToString() const;
};

#endif