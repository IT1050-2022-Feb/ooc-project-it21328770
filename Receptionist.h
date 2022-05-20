#pragma once
#include "Receipt.h"
#define size 2
class Receptionist
{
private:
int staffId;
char staffName[20];
char staffEmail[40];
Receipt* rec[size];
public:
Receptionist();
Receptionist(int sId, const char sName[], const
char sEmail[]); 
void displayDetails();
~Receptionist();
};