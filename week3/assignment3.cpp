#include <iostream>

int main() {
   char target[] = "Kang Eungi";
   long b[967];
   int a = 17;
   int i = 7766;
   int *c = new int[601];
   char * copy = "is no no";
   char  name = 'a';

  

   std::cout<<&target<<std::endl;
   std::cout<<&b<<std::endl;
   std::cout<<&a<<std::endl;
   std::cout<<&c<<std::endl;
   std::cout<<&copy<<std::endl; 
   std::cout<<&name+i<<std::endl;
}
