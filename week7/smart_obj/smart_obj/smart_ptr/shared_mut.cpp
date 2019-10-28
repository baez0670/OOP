//
// Created by 김혁진 on 14/10/2019.
//

#include "shared_mut.h"

namespace ptr {
shared_mut::shared_mut() {
    _mgr = new mgr();
}

shared_mut::shared_mut(Object* _obj) {
    _mgr = new mgr(_obj);

}

shared_mut::~shared_mut() {
    release();
}

void shared_mut::release() {
	if (_mgr == nullptr) {
		return;
	}
	_mgr->count--;
	if (_mgr->count == 0) {
		delete _mgr;
	}
	_mgr = nullptr;
}
Object* shared_mut::get() const{
	if (_mgr == nullptr) {
		return nullptr;
	}
	return _mgr->ptr;
}
int shared_mut::count() {
	if (_mgr == nullptr) {
		return 0;
	}
		return _mgr->count;
}
void shared_mut::increase() {
	if (_mgr == nullptr) {
		return;
	}
	 _mgr->count++;
}
shared_mut shared_mut::operator+(const shared_mut&shared) {
	Object* obj = new Object(_mgr->ptr->get() + shared.get()->get());
	return shared_mut(obj);
}
shared_mut shared_mut::operator-(const shared_mut&shared) {
	Object* obj = new Object(_mgr->ptr->get() - shared.get()->get());
	return shared_mut(obj);
}
shared_mut shared_mut::operator*(const shared_mut&shared) {
	Object* obj = new Object(_mgr->ptr->get() * shared.get()->get());
	return shared_mut(obj);
}
shared_mut shared_mut::operator/(const shared_mut&shared) {
	Object* obj = new Object(_mgr->ptr->get() / shared.get()->get());
	return shared_mut(obj);
}

} // end of namespace ptr
