#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}


PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	// Initialize PID  coefficients
	this->Kp = Kp;
	this->Ki = Ki;
	this->Kd = Kd;

	d_error = 0;
	p_error = 0;
	i_error = 0;

}

void PID::UpdateError(double cte) {
	d_error = cte - p_error;
	p_error = cte;
	i_error += cte;
	
}

double PID::TotalError() {
	double total_error = p_error * Kp + d_error * Kd + i_error * Ki;
	return total_error;
}
