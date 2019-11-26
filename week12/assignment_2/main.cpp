#include <iostream>
#include "json_object.h"

int main() {
    {
        std::string str("{'a':'b'}");
        json_object *obj = json_object::parse(str);
        std::string tostr = obj->to_string();
        std::cout << tostr << std::endl;
    }

    {
        std::string str("'a'");
        json_object *obj = json_object::parse(str);
        std::string tostr = obj->to_string();
        std::cout << tostr << std::endl;
    }

    {
        std::string str("1");
        json_object *obj = json_object::parse(str);
        std::string tostr = obj->to_string();
        std::cout << tostr << std::endl;
    }

    {
        std::string str("{'a': 'b', 1: 2, 'b': [1,2,'3','abcdefg', '1,2,\"3\",4', [[[]], [[]],],], 'c': {'a': 'b', 'b': [1, 2, 3, 4, 5]}}");
        json_object* obj = json_object::parse(str);
        std::string tostr = obj->to_string();
        std::cout << tostr << std::endl;

        json_object* obj2 = json_object::parse(tostr);
        std::string tostr2 = obj2->to_string();
        std::cout << tostr2 << std::endl;
    }

    {
        std::string str("{1:2, 1:3, 1:4}");
        json_object* obj = json_object::parse(str);
        std::string tostr = obj->to_string();
        std::cout << tostr << std::endl;
    }

    {
        std::string str("{'a': 'b', 'a': 123, 'a': 'This Assignment is easy'}");
        json_object* obj = json_object::parse(str);
        std::string tostr = obj->to_string();
        std::cout << tostr << std::endl;
    }

    /**
    result

    {'a': 'b'}
    'a'
    15
    {'a': 'b', 14: 24, 'b': [13, 23, '3', 'abcdefg', '1,2,"3",4', [[[]], [[]]]], 'c': {'a': 'b', 'b': [12, 22, 32, 42, 52]}}
    {'a': 'b', 14: 24, 'b': [13, 23, '3', 'abcdefg', '1,2,"3",4', [[[]], [[]]]], 'c': {'a': 'b', 'b': [12, 22, 32, 42, 52]}}
    {14: 44}
    {'a': 'This Assignment is easy'}

     */
    return 0;
}