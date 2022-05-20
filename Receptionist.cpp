#include "Receptionist.h"
#include<cstring>
#include <iostream>
#include <iomanip>
using namespace std;
Receptionist::Receptionist() {
staffId = 0;
strcpy_s(staffName,"");
strcpy_s(staffEmail,"");
}
Receptionist::Receptionist(int sId, const char sName[], 
const char sEmail[]) {
staffId = sId;
strcpy_s(staffName, sName);
strcpy_s(staffEmail, sEmail);
}
void Receptionist::displayDetails() {
cout << setw(20)<<"Recepionist Details " <<
setw(20)<<"Receptionist ID : "<<staffId <<"Receptionist 
Name : "<<staffName<<endl;
cout << "Receptionist Email : " << staffEmail <<
endl;
}
Receptionist::~Receptionist() {
  }