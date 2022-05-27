#define _CRT_SECURE_NO_WARNINGS 

//基本框架
//包含一个叫stdio.h的文件
//std-标准 standard   input输入 output输出
//标准输入输出文件
#include <stdio.h>

//int main()//主函数-程序的入口 fn+f10
//{ //在一个项目中main函数有且仅有一个！！！
//		  //int 是整型的意思（整数形式的数据）
//		  //main前面的int 表示的是main函数调用返回一个整型值{
//	printf("haha\nvery nice");//printf 在屏幕上输出括号里的内容
//					 //print function 打印 函数 -printf
//					 //\n是换行符
//	return 0;        //返回 0，0是整数
//}

//printf 是库函数-C语言本身提供的函数
//使用库函数要先 - 打招呼 #include （包含）

//注释     Ctrl + K , Ctrl + C
//取消注释 Ctrl + K , Ctrl + U





//数据类型
//char			字符数据类型，a,b,c
//short	int		短整型
//int			整形
//long			长整型
//long long		更长的整形
//float			单精度浮点数1.2
//double		双精度浮点数1.23

//int main() 
//{
	//char - 字符类型
	//char ch = 'A';//向内存申请空间，名为ch 的字符A
	//printf("%c\n", ch);// %c -- 打印字符格式的数据

	//int - 整形  十进制数据
	//short -短整型
	// 长整型。。。
	//int age = 20;//名为age 的整形数据20
	//             //age向内存申请空间后，20会被转换成2进制储存10100（2进制）
	//printf("%d\n", age);//%d -- 打印整形十进制数据
	//short age = 3;
	//printf("%d\n", age);

	//float -浮点数
	//float f = 3.0;
	//printf("%f\n", f);//3.000000
    //double d = 3.14;
	//printf("%lf\n", d);//3.140000 %lf 打印双精度浮点数

	//return 0;

	//%d --打印整型
	//%c --打印字符
	//%f --打印浮点数字 - 小数
	//%p --以地址形式打印
	//%x --打印16进制数字
	//......

//}

//int main()
//{
//	printf("%d\n", sizeof(char));   
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	//1 2 4 4 8 4 8 字节
//  //短整型和长整型的区别：bit位不一样，长整型的值域更大
// 
//  //单精度浮点数在转换成二进制数时只保留32位，逢5进1
//  //                           所以有些数会偏小或偏大
//  //双精度则保留64位
//}

//字节
//bit 比特位 一个bit可以存0 / 1,二进制
//byte 字节 = 8 bit
//kb mb gb tb pb


//2，8，10，16进制
//10进制除以8 = 8		10-8
//10进制除以16 = 16		10-16
//2进制乘以2 = 10		2-10
//8进制乘以8 = 10		8-10
//16进制乘以16 = 10		16-10

//   8--10--16    10进制向几进制转换就除以几
//       |
//       2


//练习
//int main()
//{
//	short age = 30110;
//    double weight = 71.2;
//	printf("%d\n", age);
//	printf("%f\n", weight);
//	return 0;
//}

//变量
//{}代码块
//全局变量 --定义在{}外的变量
//局部变量 --定义在{}内的变量

//int a = 100;//全局变量
//
//int main () 
//{
//	int a = 10;//局部变量
//	printf("%d\n", a);//输出的顺序：局部 > 全局
//	return 0;         //变量名字相投容易产生bug
//
//}


//int main()
//{
//	{int a = 10; }
//	printf("%d\n", a);
//		//未声明的标识符
//					//局部变量被引用时必须与函数代码在同一{}内
//	return 0;
//}

//计算两个数的和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;//定义初始值为空值
//	//定义变量一定要放在函数前面！！
//
//	//输入数据 --按用户指定的格式把数据输入到指定的变量中
//	//& --取地址符号
// 
//
//	scanf("%d%d", &num1, &num2);//输入两个整数--%d%d  
//					//把一会输入的数字放到 &num1 &num2 这两个地址处
//	sum = num1 + num2;
//	printf("%d\n", sum); //执行，从键盘中输入两个数字 回车-求和
//
//	return 0;
//}


//练习
//int main() 
//{
//	float a = 0;
//	int b = 0;
//	float sum = 0; //确定最后和的值的格式
//	scanf("%f%d", &a, &b);
//	sum = a + b;
//	printf("%f\n", sum);//1.1 2
//						//3.100000
//	return 0;
//}



//全局变量的作用域是整个项目
//局部变量的作用域
//被哪个代码块包裹作用域就在哪个代码块
//int main()
//{
//	int a = 10;//作用域再最外面的{}下
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;//作用域在当前的{}下
//	}
//	
//		printf("%d\n", a);//找不到a  无法输出
//	
//	return 0;
//}


//生命周期
//局部变量的生命周期从进作用域开始到出作用域结束，最近的{}内
//全局变量的生命周期是整个程序的生命周期




