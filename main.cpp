#include <iostream>
#include "Customer.h"
#include "Discount.h"
#include "Payment.h"
#include "HotelHall.h"
#include"GoldHall.h"
#include"SkyHall.h"
#include"BallHall.h"
#include"Feedback.h"
#include"Receipt.h"
#include"Reservation.h"
#include"Receptionist.h"

using namespace std;

int main()
{
    //customer constructor
    Customer* C1 = new Customer(001, "Rusith", "99457890345v", "rusith123@gmail.com", "Wennappuwa");
    Customer* C2 = new Customer(002, "Hansaka", "8763456789v", "hansaka@gmail.com", "Kottawa");

    //discount constructor
    Discount* D1 = new Discount(001);
    Discount* D2 = new Discount(002);

    //Feedback constructor
    Feedback* F1 = new Feedback(001, "Good");
    Feedback* F2 = new Feedback(002, "GoodService");

    //Payment constructor
    Payment* P1 = new Payment(001, "Credit Card", 100000, "2022-06-02");
    Payment* P2 = new Payment(002, "Debit Card", 175000, "2022-07-22");

    //Receipt constructor
    Receipt* R1 = new Receipt();

    //Receptionist constructor
    Receptionist* RP1 = new Receptionist(006, "Amanda", "amanda123@gmail.com");
    Receptionist* RP2 = new Receptionist(007, "Menula", "menula123@gmail.com");

    //Reservation constructor
    Reservation* RV1 = new Reservation();


    //HotelHall constructor
    HotelHall* H1 = new HotelHall(004, 2, "SkyHall", 100000);
    HotelHall* H2 = new HotelHall(005, 4, "GoldHall", 175000);
    HotelHall* H3 = new HotelHall(006, 1, "BallHall", 165000);

    //GoldHall inheritance constructor
    GoldHall* G1 = new GoldHall();

    //SkyHall inheritance constructor
    SkyHall* S1 = new SkyHall();

    //BallHall inheritance constructor
    BallHall* B1 = new BallHall();

    cout << "------------Hotel Reservation System For Special Events----------------" << endl;


    //display customer with reservation
    C1->displayCustomer();
    C2->displayCustomer();

    cout << "----------------------------------------" << endl;

    //dipaly hotelhall
    B1->displayhall();
    B2->displayhall();

    cout << "----------------------------------------" << endl;

    //display receptionist
    RP1->displayDetails();
    RP2->displayDetails();

    cout << "----------------------------------------" << endl;

    //Payment composition
    P1->displayPay();
    P2->displayPay();

    cout << "----------------------------------------" << endl;

    //calculate discount and display discount
    D1->addDiscount(10, P1);
    D1->displayDiscount();

    cout << "----------------------------------------" << endl;

    //add discount consrtructor
    D2->addDiscount(10, P2);
    D2->displayDiscount();

    cout << "----------------------------------------" << endl;

    //calculate total
    P1->calTotalPayment();
    P2->calTotalPayment();

    return 0;
}
