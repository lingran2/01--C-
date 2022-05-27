#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	char arr1[] = { 'a','b','c','d'};
//	char arr2[] = "abcd";
//	printf("%d\n", sizeof(arr1));//随机值
//	//printf("%d\n", sizeof(arr2));
//	//printf("%s\n",arr1);
//	return 0；
//
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;
//	//  ~ -- 按二进制位取反
//	//整数在内存中存储的是二进制的补码
//	//
//	// 1.取反0000000000
//	//       1111111111
//	// 2.求出反码 1111111110
//	// 3.求出源码 1000000001 转换成10进制 -1
//	// 
//	//源码 -- 最高位符号位0 是正数，最高位1 是负数
//	//反码 -- 正数的反码与源码一致
//	//        负数的反码 符号位不变其他按位取反
//	//补码 -- 正数的补码与源码一致
//	//        负数的补码是在反码的基础上加1
//	//例如：5                          -5
//	//			源码 -- 0101				源码 -- 1101
//	//			反码 -- 0101				反码 -- 1010
//	//			补码 -- 0101				补码 -- 1011
//
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;// 后置++，先把a的值赋给b 再++
//	int b = ++a;// 前置++，现++，再把a的指赋给b
//	printf("a= %d b= %d\n", a,b);
//	return 0;
//}

//int main()
//{	//强制类型转换
//	int a = (int)3.14; //double --> int 
//	return 0;
//}

//int main()
//{
//	//真 - 非0
//	//假 - 0
//	//逻辑与 - &&   有假则假
//	//逻辑或 - ||   有真则真
//	int a = 3;
//	int b = 0;
//	int c = a && b; 
//	int d = a || b;
//	printf("c= %d\n", c);// 0
//	printf("d= %d\n", d);// 1
//	return 0;
//
//}


//条件操作符(三目操作符)
// ?
//int main()
//{
//	int a = 9;
//	int b = 3;
//	int max = 0;
//	max = (a > b ? a : b);//如果 a > b为真，则执行a
//						  //如果 a > b为假，则执行b
//	printf("%d\n", max);//  9 
//	return 0;
//}

//int main()
//{
//	int arr[3] = { 0 };
//	// [] - 下标操作符 
//}



//常见关键字
//
//int main()
//{
//	//register 寄存器 - 把a定义成寄存器变量 - 让某些数据快速被访问
//	register int a = 10;
//	//unsigned - 无符号位、不分正负
//	unsigned int a = 9;
//	//typedef - 类型重定义
//	typedef unsigned int u_int;//把这个类型 unsigned int 重新起名为 u_int
//	unsigned int num = 10;
//	u_int num2 = 10;//u_int 和 unsigned int类型一样,只是名字不同
//	return 0;
//}


//static - 修饰局部变量 - 生命周期变长
//         修饰全局变量 - 变量只能在当前源文件使用
// 
//void test()
//{	
//	static int b = 1;// 把b变成静态变量-全局变量
//	//int b = 1; 则b会在出函数的时候消失，再一次循环时还是从 b = 1开始
//	b++;
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	while (a < 5)
//	{
//		test();
//		a++;
//	}
//}


//extern - 声明外部变量
// 
//int main()
//{
//	//调用外部变量
//	extern int m_num;//先声明
//	printf("%d\n", m_num);// 再使用   10
//	return 0;
//}

//extern - 声明外部函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int num = 0;
//	extern int Add(int x, int y);//声明外部函数
//	num = Add(a, b);
//	printf("num = %d\n", num);
//	return 0;
//}


//define定义的常量与宏
//#define Max(x,y) (x>y?x:y) //x>y满足条件，输出x
//						   //     不满足，输出y
//
//int main()
//{
//	int a = 10;
//	int b = 4;
//	int max = Max(a, b);
//	printf("较大值是%d\n", max);
//	return 0;
//}


//指针
// 
//变量如何像内存申请空间
// 地址是如何产生的
//假设计算机是32位的
// 32位代表32条地址线
// 正电 负电
// 有2的32次方个地址
// 每个空间的大小是4byte
//  64位 每个空间是8byte

//int main()
//{
//	int a = 10;
//	//&a 取地址
//	//打印地址用 %p
//	//指针 int*  -- 专门用来存放地址的变量
//	// * 解引用操作符  *b 对b进行解引用，找到它所指向的对象a
//	int* b = &a;
//	*b = 20;//把a变成20
//	printf("%p\n", &a);//地址： 0026F814   16进制
//	printf("%p\n", b); //地址： 0026F814
//	printf("%d\n", a); // a = 20
//	return 0;
//}
