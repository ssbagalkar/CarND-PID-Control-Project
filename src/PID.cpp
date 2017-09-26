#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}


PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	// Initialize PID  coefficients
	Kp = 0;
	Ki = 0;
	Kd = 0;
	is_initialized = true;
}

void PID::UpdateError(double cte) {
	
}

double PID::TotalError() {
	double total_error = p_error * Kp + d_error * Kd + i_error * Ki;
	return total_error;
}

