#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ��������,û�к�����.ֻ��һ����ͷ֧Ʊ,���߱�����
// ��������һ������
// 1.���߱���������һ������Ϊ Add �ĺ���
// 2.�����������������,���� double ����
// 3.�����������һ������ֵ,����Ҳ��double
extern double Add(double x, double y);

#define SIZE 5

//typedef unsigned int uint;
#define uint unsigned int

int main(){
	uint a = 10;
	scanf("%d", &a);
	//double c = Add(10.0, 20.0 );
	//// %d ʮ����,�з��ŵ� ����
	//// %f ���ܴ�ӡһ��������.
	//printf("c = %f\n ", c);
	system("pause");
	return 0;
}

//double Add(double x, double y){
//	return x + y;
//}