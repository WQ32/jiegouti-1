#include <stdio.h>

////����һ���ṹ������
////����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������(����)
////����ѧ��������:���֣��绰���Ա�����
//
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5;
////s4��s5Ҳ��ȫ�ֱ���
//
////ȫ�ֱ���
//struct Stu s3;
//int main()
//{
//	//�����ṹ�����
//	struct Stu s1;
//	struct Stu s2;
//	//��ʼ��
//	struct Stu s = { "���ܼ�","19583593346","��",18 };
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
////sa �� psa�ǲ�һ����

// ������
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
//	//ʹ����typedef���ѽṹ�����ΪNode,���Կ���ֱ��ʹ��
//	return 0;
//}

//��ʼ��������ӡ

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
	//��ʼ��
	struct Stu s = { 'z',{55.6,30},18,3.14,"hello bit!" };
	printf("  %c   %d   %lf   %s\n", s.c, s.a, s.d, s.arr);
	printf("  %lf\n", s.st.weight);
	return 0;
}