#include "Receipt.h"
Receipt::Receipt() {
billId = 0;
}
Receipt::Receipt(int bId, Reservation* rsvt, 
Receptionist* rpt) {
billId = bId;
reservation = rsvt;
receptionist = rpt;
}
void Receipt::displayBillDetails() {
}
Receipt::~Receipt() {
}
