#define  _CRT_SECURE_NO_WARNINGS  //解决C4996的错误
#pragma warning(disable:6031)
#include<stdio.h>

//

//变量--常量	
//定义变量的方式为：类型+变量名+赋值
//变量的分类：局部变量/全局变量

int mian()
{
	int num1;
	int num2;
	int num3;
	printf("输入两个相加的数");
	scanf("%d%d", &num1, &num2);

	num3 = num1 + num2;
	printf("相加之后等于%d", num3);
	return 0;
}

//int num2 = 10;//全局变量--定义在代码块（{}）之外的变量
//
//int main()
//{
//	int num1 = 20;//局部变量--定义在代码块（{}）之内的变量
//	printf("%d\n", num1);
//	//总结：局部变量和全局变量的名字相同时，局部变量优先。局部变量不能在局部范围外使用。
//	return 0;
//}



//
//int main()
//{
//	short int agge = 20;
//	float weight = 95.6f;  //95.6默认double数据类型  需加上f改成float
//	printf("%d\n", agge);
//	printf("%d\n", weight);
//	return 0;
//}
//sizeof打印数据类型长度	
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