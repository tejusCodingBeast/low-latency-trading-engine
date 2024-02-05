#ifndef REJECTCREATE_H
#define REJECTCREATE_H
#include "IOrderCore.h"
#include "Reject.h"

class RejectCreator{
private:

public:
    RejectCreator();
    ~RejectCreator();
    Reject& GenerateOrderCoreReject(IOrderCore* orderCore, RejectionReason rejection_reason);

};

#endif