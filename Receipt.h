#pragma once
#include"Receptionist.h"
#include"Reservation.h"
#include"Payment.h"
#define size 2
class Receipt
{
private:
int billId;
Receptionist* receptionist;
Reservation* reservation;
Payment* payment[size];
Customer* customer[size];
public:
Receipt();
Receipt(int bId, Reservation*rsvt, 
Receptionist*rpt);
void displayBillDetails() {
};
void displayCustomerDetails(Customer* c1, 
Customer* c2) {
customer[0] = c1;
customer[1] = c2;
for (int i = 0; i < size; i++) {
customer[i]->displayCustomer();
};
};
~Receipt();
};