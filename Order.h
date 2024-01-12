#ifndef ORDER_H
#define ORDER_H
#include "IOrderCore.h"
#include <string>

class Order: public IOrderCore{
    private:
    double price_;
    bool is_buy_side_;
    IOrderCore* ordercore_;
    int initial_quantity_;
    int current_quantity_;

    protected:

    public:
    // Constructors
    Order(IOrderCore* ordercore, const double price, const int quantity, const bool is_buy_side);
    Order(/*ModifyOrder mo*/);
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