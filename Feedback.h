#pragma once
#include "Customer.h"
class Feedback
{
private:
int feedbackId;
Customer* customer;
char description;
public:
Feedback();
Feedback(int fId, Customer* customer, const char
fDesc[]);
void sendFeedback();
void checkReply();
~Feedback();
};
