#include "car.h"

car::car(){
}
car::car(int wheel_number, int max_speed) :vehicle(wheel_number, max_speed) {
	this->wheel_number = wheel_number;
	this->max_speed = max_speed;
}

car::car(int wheel_number, int max_speed, char* car_name) : vehicle(wheel_number, max_speed) {
	this->wheel_number = wheel_number;
	this->max_speed = max_speed;
	this->car_name = car_name;
}
car::car(int wheel_number, int max_speed, char* car_name, bool has_name) : vehicle(wheel_number, max_speed, has_name) {
	this->wheel_number = wheel_number;
	this->max_speed = max_speed;
	this->car_name = car_name;
	this->has_name = has_name;
}
char* car::get_car_name() {
	return this->car_name;
}
const char* car::get_class_name() {
	return "car";
}
void car::set_car_name(char* car_name){
	this->car_name = car_name;
}