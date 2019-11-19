#include "student.h"
student::student() {
	student_id = -1;
}

student::student(char* name):human(name){
	student_id = -1;
}

student::student(int student_id) {
		this->student_id = student_id;
}

student::student(char *name, int student_id) :human(name) {
		
	this->student_id = student_id;
}

int student::get_student_id()  {
	return this->student_id;
}

int student::get_id() {
		return 1;
}
