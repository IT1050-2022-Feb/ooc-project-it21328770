#include "Feedback.h"
#include<cstring>
using namespace std;
Feedback::Feedback() {
	feedbackId = 0;
	strcpy_s(description, "");
}
Feedback::Feedback(int fId, Customer* customer, const char fDesc[]) {
	feedbackId = fId;
	strcpy_s(description, fDesc);
}void Feedback::sendFeedback() {

}
void Feedback::checkReply() {

}
Feedback::~Feedback() {

}
