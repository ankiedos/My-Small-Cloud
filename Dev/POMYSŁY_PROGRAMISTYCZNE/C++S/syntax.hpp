// include\syntax.hpp
#define until(x) while(!(x))
#define unless(x) if(!(x))
#define endif }
#define endloop }
#define endfor }
#define then {
#define __do {
#define __begin {
#define __end }

// Examplse:
// for(int i = 0; i < 10; i++) do
// ...
// endloop
// ...
// unless(x > 10) then
// ...
// endif
// ...
// while(x == 10)
// begin
// ...
// end
// src\main.cpp
#include<..\include\syntax.hpp>
#include<iostream>
#include<compare>
int x = 1;
std::cin >> x;
unless(x == 1) then
	until(x == 1) __do
		(x <=> 1) == true ? x-- : x++;
	endloop
endif
std::cout << x << "\n";