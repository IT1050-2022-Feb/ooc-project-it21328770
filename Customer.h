

#pragma once
#include "Reservation.h"
#include "Feedback.h"
#define size 2
class Customer
{
private:
	int customerId;
	char name[20];
	char nic[12];
	char email[30];
	char address[50];
	int noOfRes;
	Reservation *res[size];
	Feedback *fdback[size];

public:
	Customer();
	Customer(int cid, const char cname[], const char cNic[], const char cEmail[], const char cAddress[], int nRes);
	void addReservation(Reservation*r);//As the multiplicity 0..*
	void displayCustomer();
	void displayCustomerName();
	void validate();
	~Customer();

};
