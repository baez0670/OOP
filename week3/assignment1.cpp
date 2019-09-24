#include <iostream>

int code(){
	return 1;
}

int data=1;
int bss;
int main(){
	char* rodata="asd";
	int* heap = new int (1);
	int Stack=1;

	std::cout<<"code\t"<<(void*) code << std::endl;
	std::cout<<"Rodata\t"<<(void*)rodata<<std::endl;
	std::cout<<"data\t"<<&data<<std::endl;
	std::cout<<"bss\t"<<&bss<<std::endl;
	std::cout<<"HEAP\t"<<heap<<std::endl;
	std::cout<<"Stack\t"<<&Stack<<std::endl;
}
