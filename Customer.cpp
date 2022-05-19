#include "Customer.h"
#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;

//constructor
Customer::Customer() {
	customerId = 0;
	strcpy_s(name, "");
	strcpy_s(nic, "");
	strcpy_s(email, "");
	strcpy_s(address, "");
	noOfRes = 0;
}
//Overloading
Customer::Customer(int cid, const char cName[], const char cNic[], const char cEmail[], const char cAddress[], int nRes) {
	customerId = cid;
	strcpy_s(name, cName);
	strcpy_s(nic, cNic);
	strcpy_s(email, cEmail);
	strcpy_s(address, cAddress);
	noOfRes = nRes;
}
void addReservation(Reservation* r) {
	if (noOfRes < size) {
		reservation[noOfRes] = r;
		noOfRes++;
	}
}
void displayCustomer() {
	cout << "Reservation Made : ";
	for (int i = 0; i < noOfRes; i++) {
		reservation[i]->displayReservation();
	}
}
void displayCustomerName() {
	cout << setw(20) << "Customer Details : " <<endl<< "Name : " << name << "ID : " << customerId << endl;
}
void validate() {

}
Customer::~Customer() {
	cout << "Delete registered usewr." << endl;
}
