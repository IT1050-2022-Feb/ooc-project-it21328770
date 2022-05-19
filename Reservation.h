#pragma once
#include "Customer.h"
#include "Receipt.h"
#include "HotelHall.h"
class Reservation
{
  private:
    char reservationId[10];
    Customer* customer;
    Receipt* Rec;
    HotelHall* hall[3];
  public:
    Reservation();
    Reservation(const char rId[], Customer*cus, Receipt*rpt);
    double calTotal();//
    void displayReservation();
    void addHall(HotelHall*hall1, HotelHall* hall2, 
    HotelHall* hall3);
    void displayReservationCustomer();
    void displayAvailability();
    ~Reservation();
};