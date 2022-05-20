#pragma once
#include"Payment.h"
  class Discount
  {
    private:
        int discountId;
        double discount;
    public:
        Discount();
        Discount(int dId);
      void addDiscount(double dis, Payment* 
      p);//dependancy(depent on class payament)
      void displayDiscount();
    ~Discount();
};
