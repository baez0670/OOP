//
// Created by 김혁진 on 14/10/2019.
//

#include "smart_obj.h"

namespace ptr {
smart_obj::mgr* const smart_obj::empty_mgr = new smart_obj::mgr(); //null처럼 사용할 빈 mgr 생성
std::map<student*, smart_obj::mgr*> smart_obj::ptr_map; //student를 key, mgr을 value로 저장함

smart_obj::smart_obj() {
//    std::cout << "Smart pointer Creation" << std::endl;
};

smart_obj::~smart_obj() {
//    std::cout << "Smart pointer Deletion" << std::endl;
}
} // end of namespace ptr
