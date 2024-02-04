#ifndef ORDERRECORD_H
#define ORDERRECORD_H
#include <string>

using namespace std;

// Read-only representation of an order
class OrderRecord{
    private:

    public:
    OrderRecord(double order_id, int quantity, double price, 
    bool is_buy_side, string username, int security_id, int theoretical_queue_position);
};

#endif