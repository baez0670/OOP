//
// Created by 김혁진 on 2019/10/28.
//

#include "human.h"

human::human() {
} 

human::human(char* name) {
	this->name = name;

}

char* human::get_name() {
	return this->name;
}

int human::get_id() {
	return 0;	
}
