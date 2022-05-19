#include "Reservation.h"
#include<cstring>
#include<iostream>
#include<iomanip>

using namespace std;

Reservation::Reservation() {
	strcpy_s(reservationId, "");
}
Reservation::Reservation(const char rId[], Customer* cus, Receipt* rpt) {
	strcpy_s(reservationId, rId);
	customer = cus;
	Rec = rpt;
	cus->addReservation(this);
}
double Reservation::calTotal() {

}
void Reservation::addHall(HotelHall* hall1, HotelHall* hall2, HotelHall* hall3)
{
	hall[0] = hall1;
	hall[1] = hall2;
	hall[2] = hall3;
}
//
void Reservation:: displayReservation() {
	cout << endl << setw(20) << "Reservations : " << setw(10) << "Reservation ID :" << reservationId << endl;
	for (int i = 0; i < 3; i++) {
		hall[i]->displayHall();
	}
}
void Reservation::displayReservationCustomer() {
	cus->displayCustomerName();
}
void Reservation::displayAvailability() {

}
Reservation::~Reservation() {
	cout << "Delete Reservation." << endl;
}