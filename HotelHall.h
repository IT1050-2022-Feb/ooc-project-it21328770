HotelHall.h
#pragma once
class HotelHall
{
  protected:
    int hallId;
    int package;
    char halltype[10];
    double price;
  public:
    HotelHall();
    HotelHall(int hId, int pkg, const char hType[], 
    double hPrice);
    virtual void displayHall();
    ~HotelHall();
};
