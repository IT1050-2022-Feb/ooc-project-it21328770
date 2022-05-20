#include "Discount.h"
#include <iostream>
using namespace std;
    Discount::Discount()
    {
      discountId = 0;
      discount = 0.0;
    }
    Discount::Discount(int dId)
    {
      discountId = dId;
    }
    void Discount::addDiscount(double dis, Payment* p)
    {
      discount = (dis * p->calTotalPayment()) / 100;
    }
      void Discount::displayDiscount()
    {
      cout << "Discount generated." << endl;
      cout << "Discount ID : " << discountId <<
              "Discount : Rs " << discount << endl;
    }
    Discount::~Discount()
    {
    }