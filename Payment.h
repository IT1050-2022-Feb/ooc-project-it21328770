#pragma once
#include"Reservation.h"
  class Payment
  {
    private:
        int paymentId;
        char type[20];
        double totalCharge;
        char date;
        Reservation* reservation[2];//composition
    public:
        Payment();
        Payment(int pId, const char pType[], double
                tCharge, const char pDate, int r1, int r2);
        double calTotalPayment();
        void displayPay();
        void validatePay();
        ~Payment();
  };