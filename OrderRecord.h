#ifndef ORDERRECORD_H
#define ORDERRECORD_H
#include <string>

using namespace std;

// Read-only representation of an order
class OrderRecord{
    private:
    double order_id_;
    double quantity_;
    double price_;
    bool is_buy_side_;
    string username_;
    int security_id_;
    int theoretical_queue_position_;
    
    public:
    OrderRecord(double order_id, int quantity, double price, 
    bool is_buy_side, string username, int security_id, int theoretical_queue_position);
};

#endif