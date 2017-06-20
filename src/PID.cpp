#include "PID.h"
#include <math.h>

using namespace std;

/*
* TODO: Complete the PID class.
* Added the update error and inits 
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	this->Kp = Kp;
	this->Ki = Ki;
	this->Kd = Kd;
}

void PID::UpdateError(double cte) {
	d_error = cte - p_error;
	p_error = cte;
	i_error += cte;	
}

double PID::TotalError() {
	double steer = -Kp * p_error - Kd * d_error - Ki * i_error;
	if (fabs(steer) > 1.0)
	{
		steer *= 0.5;
	}
	else
	{
		steer *= -0.5;
	}
	return steer;
}

