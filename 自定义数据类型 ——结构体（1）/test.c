#include <stdio.h>

////声明一个结构体类型
////声明一个学生类型，是想通过学生类型来创建学生变量(对象)
////描述学生：属性:名字，电话，性别，年龄
//
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5;
////s4和s5也是全局变量
//
////全局变量
//struct Stu s3;
//int main()
//{
//	//创建结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	//初始化
//	struct Stu s = { "张周吉","19583593346","男",18 };
//	return 0;
//}
//
//struct
//{
//	int a;
//	char c;
//}sa;
//struct
//{
//	int a;
//	char c;
//}* psa;
////sa 和 psa是不一样的

// 自引用
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	//使用了typedef，把结构体改名为Node,所以可以直接使用
//	return 0;
//}

//初始化，并打印

struct T
{
	double weight;
	short age;
};

struct Stu
{
	char c;
	struct T st;
	int a;
	double d;
	char arr[50];
};

int main()
{
	//初始化
	struct Stu s = { 'z',{55.6,30},18,3.14,"hello bit!" };
	printf("  %c   %d   %lf   %s\n", s.c, s.a, s.d, s.arr);
	printf("  %lf\n", s.st.weight);
	return 0;
}