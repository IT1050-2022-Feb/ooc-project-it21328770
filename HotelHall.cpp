#include "HotelHall.h"
#include<iostream>
#include<cstring>
using namespace std;

HotelHall::HotelHall() {
	hallId = 0;
	package = 0;
	strcpy_s(halltype, "");
	price = 0.0;

}
HotelHall::HotelHall(int hId, int pkg, const char hType[], double hPrice) {
	hallId = hId;
	package = pkg;
	strcpy_s(halltype, hType);
	price = hPrice;
}
void HotelHall::displayHall() {

}
HotelHall::~HotelHall() {
	cout << "Delete Hall." << endl;
}
