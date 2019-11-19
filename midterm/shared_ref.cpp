//
// Created by 김혁진 on 14/10/2019.
//

#include "shared_ref.h"

namespace ptr {
	shared_ref::shared_ref() {
		_mgr = empty_mgr;
	}

	shared_ref::shared_ref(student* student) {
		if (ptr_map[student] != nullptr) {
			_mgr = ptr_map[student];
			increase();
		}
		else {
			_mgr = new mgr(student);
			//ptr_map[student] = nullptr;
			ptr_map[student] = _mgr;
		}
	}

	shared_ref::shared_ref(const shared_ref& shared) { //copy생성자
		_mgr = shared._mgr;
		increase();
	}

	shared_ref::~shared_ref() {	//소멸자
		release();
	}

	//_mgr이 존재할 때, count를 줄여주고 count가 0이 되면 ptr_map에서 _mgr에 해당하는 value(key로 검색)를 nullptr로 바꿔주고 _mgr을 삭제함, 기본적으로 _mgr은 nullptr로 바꿔줌
	void shared_ref::release() {
		if (_mgr == nullptr) {
			return;
		}
		_mgr->count--;
		if (_mgr->count == 0) {
			ptr_map[_mgr->ptr] = nullptr;
			delete(_mgr);
		}
		this->_mgr = nullptr;
	}

	student *shared_ref::get() const {
		if (_mgr == nullptr) {
			return nullptr;
		}
		return _mgr->ptr;
	}

	//_mgr이 존재할 때, _mgr안의 count를 증가시켜줌
	void shared_ref::increase() {
		_mgr->count++;
	}

	shared_ref &shared_ref::operator=(const shared_ref &r) {
		if (this != &r) {
			release();
			_mgr = r._mgr;
			increase();
		}
		return *this;
	}

	student *shared_ref::operator->() {
		return _mgr->ptr;
	}

	int shared_ref::count() {
		if (_mgr)
			return _mgr->count;
		return 0;
	}

}


