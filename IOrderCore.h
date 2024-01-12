#ifndef IORDERCORE_H
#define IORDERCORE_H
#include <string>

class IOrderCore{
    protected:
    int order_id_;
    std::string username_;
    int security_id_;

    public:
    // Constructors
    IOrderCore(){
        
    }
    IOrderCore(const int order_id, const std::string username, const int security_id): order_id_(order_id), username_(username), security_id_(security_id){

    }
    
    // Pure virtual member functions
    virtual int GetOrderID() const = 0;
    virtual std::string GetUsername() const = 0;
    virtual int GetSecurityID() const = 0;
    
};

#endif