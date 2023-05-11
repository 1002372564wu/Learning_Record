#include <iostream>
using namespace std;

//1、const修饰指针—常量指针
//如：const int* p = &a;
//特点：指针指向的值不能改，指针的指向可以改。
//
//2、const修饰常量—指针常量
//如：int* const p = &a;
//特点：指针的值可以改，指针的指向不可以改。
//
//3、const修饰指针与常量
//如：const int* const p = &a;
//特点：指针的值和指向都不能改。