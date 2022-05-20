#include "Payment.h"
#include "Reservation.h"
#include<iostream>
#include<cstring>
using namespace std;
    Payment::Payment() {
      paymentId = 0;
      strcpy_s( type,"");
      totalCharge = 0.0;
      reservation[0] = new Reservation[006];
      reservation[1] = new Reservation[007];
}
    Payment::Payment(int pId, const char pType[], double
    tCharge, const char pDate, int r1, int r2) {
      paymentId = pId;
      strcpy_s(type,pType);
      totalCharge = tCharge;
      reservation[0] = new Reservation[r1];
      reservation[1] = new Reservation[r2];
      date = pDate;
}
    double calTotalPayment(){
    return totalCharge;
}
    void displayPay() {
      cout << "Payment for reservation : " << endl;
        for (int i = 0; i < 2; i++) {
          reservation[i]->displayReservationCustomer();
}
    cout << endl << "Payment ID : " << paymentId << 
endl;
    cout << "Pay Date : " << date << " Payment Mode : 
        " << type << endl;
}
    void validatePay() {
}
    Payment::~Payment() {
    cout << "Delete payment made." << endl;
}