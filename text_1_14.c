#define  _CRT_SECURE_NO_WARNINGS  //���C4996�Ĵ���
#pragma warning(disable:6031)
#include<stdio.h>

//

//����--����	
//��������ķ�ʽΪ������+������+��ֵ
//�����ķ��ࣺ�ֲ�����/ȫ�ֱ���

int mian()
{
	int num1;
	int num2;
	int num3;
	printf("����������ӵ���");
	scanf("%d%d", &num1, &num2);

	num3 = num1 + num2;
	printf("���֮�����%d", num3);
	return 0;
}

//int num2 = 10;//ȫ�ֱ���--�����ڴ���飨{}��֮��ı���
//
//int main()
//{
//	int num1 = 20;//�ֲ�����--�����ڴ���飨{}��֮�ڵı���
//	printf("%d\n", num1);
//	//�ܽ᣺�ֲ�������ȫ�ֱ�����������ͬʱ���ֲ��������ȡ��ֲ����������ھֲ���Χ��ʹ�á�
//	return 0;
//}



//
//int main()
//{
//	short int agge = 20;
//	float weight = 95.6f;  //95.6Ĭ��double��������  �����f�ĳ�float
//	printf("%d\n", agge);
//	printf("%d\n", weight);
//	return 0;
//}
//sizeof��ӡ�������ͳ���	
//int main()
//{
//	printf("%d\n",sizeof(char));//1 
//	printf("%d\n",sizeof(short));//2        2^16-1=65535
//	printf("%d\n",sizeof(int));//4          2^32-1
//	printf("%d\n",sizeof(long));//4
//	printf("%d\n",sizeof(long long));//8
//	printf("%d\n",sizeof(float));//4
//	printf("%d\n",sizeof(double));//8
//	return 0;
//}