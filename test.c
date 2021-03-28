#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 函数声明,没有函数体.只是一个空头支票,告诉编译器
// 存在这样一个函数
// 1.告诉编译器存在一个名字为 Add 的函数
// 2.这个函数有两个参数,都是 double 类型
// 3.这个函数还有一个返回值,类型也是double
extern double Add(double x, double y);

#define SIZE 5

//typedef unsigned int uint;
#define uint unsigned int

int main(){
	uint a = 10;
	scanf("%d", &a);
	//double c = Add(10.0, 20.0 );
	//// %d 十进制,有符号的 整数
	//// %f 就能打印一个浮点数.
	//printf("c = %f\n ", c);
	system("pause");
	return 0;
}

//double Add(double x, double y){
//	return x + y;
//}