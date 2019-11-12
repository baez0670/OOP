
#include "vehicle.h"
class bike :public vehicle
{
private:
	char* bike_name;
	int bike_number;

public:
	bike();
	bike(int, int);
	bike(int, int, char*);
	bike(int, int, char*, int);
	bike(int, int, char*, int, bool);
	int get_bike_number();
	char* get_bike_name();
	const char* get_class_name();
	void set_bike_name(char*);
	void set_bike_number(int);

};


