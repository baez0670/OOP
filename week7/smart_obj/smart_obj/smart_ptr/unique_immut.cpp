//
// Created by 김혁진 on 14/10/2019.
//

#include "unique_immut.h"

namespace ptr {
unique_immut::unique_immut() {
    _mgr = new mgr();
}

unique_immut::unique_immut(Object *obj) {
    _mgr = new mgr(obj);
}

unique_immut::unique_immut(const unique_immut &immut) {
    if (immut._mgr) {
        int val = immut._mgr->ptr->get();
        _mgr = new mgr(val);
    }
}

unique_immut::~unique_immut() {
    release();
}
void unique_immut::release() {
	if (_mgr == nullptr) {
		return;
	}
	if (_mgr->ptr != nullptr) {
		delete _mgr;
	}
	_mgr = nullptr;
}
Object* unique_immut::get() const {
	
	if (_mgr == nullptr) {
		return nullptr;
	}
	return _mgr->ptr;
}
unique_immut unique_immut::operator+(unique_immut&unique) {
	Object* obj = new Object(_mgr->ptr->get() + unique.get()->get());
	release();
	unique.release();
	return unique_immut(obj);
}
unique_immut unique_immut::operator-(unique_immut&unique) {
	Object* obj = new Object(_mgr->ptr->get() - unique.get()->get());
	release();
	unique.release();
	return unique_immut(obj);
}
unique_immut unique_immut::operator*(unique_immut&unique) {
	Object* obj = new Object(_mgr->ptr->get() * unique.get()->get());
	release();
	unique.release();
	return unique_immut(obj);
}
unique_immut unique_immut::operator/(unique_immut&unique) {
	Object* obj = new Object(_mgr->ptr->get() /unique.get()->get());
	release();
	unique.release();
	return unique_immut(obj);
}

} // end of namespace ptr
