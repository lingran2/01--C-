#define _CRT_SECURE_NO_WARNINGS 
//定义 _字符_安全_无_警告
#include <stdio.h>

//常量:
//--字面常量
//--const修饰的常变量
//--#define定义的标识符常量
//--枚举常量



//int main()
//{
//	3;//字面常量，直接一个值
//	100;
//	3.14;
//
//	//const 常属性
//	const int n = 10;
//	int arr[n] = { 0 };//n是变量，但具有常属性，所以n是常变量
//	return 0;			//int arr[3]定义一个整型数组，含有3个元素
//
//}

//#define 定义的标识符常量
//由define定义的直接是常量
//#define a 10   //注意宏定义后面不需要加 ;
//int main()
//{
//	int arr[a] = { 0 };//创建一个数组，有a个元素，元素默认初始化为0
//	printf("%d\n", a);
//	return 0;
//

//枚举常量
//性别：男，女
//颜色：红，黄，蓝

//枚举关键 --enum
//enum color //枚举三个颜色
//{
//	red,   //0 
//	yellow,//1
//	blue   //2
//};
//
//int main()
//{
//	enum color a = red;//在枚举中给 a 赋值为red
//	printf("%d\n", a);//输出为0，默认情况下红，黄，蓝的值为0，1，2
//	return 0;
//
//}

//字符串+转义字符+注释

//字符串--由双引号引起的东西叫字符串--"abcde"
//int main()
//{
//	char arr1[] = "abc";         //'a','b','c','\0'   \0是字符串结束的标志
//	char arr2[] = { 'a','b','c' };//'a','b','c'
//	//两个数组的元素不一样，arr1 比 arr2 多个0 导致两者输出结果不一样
//	//printf("%s\n", arr1);//abc
//	//打印字符串 %s
//	//printf("%s\n", arr2);//abc 烫烫烫
//	return 0;
//}

//正确应该是
//int main()
//{
//	char arr1[] = "abc";         
//	char arr2[] = { 'a','b','c',0};// \0 - 0
//	printf("%s\n", arr1);//abc
//	printf("%s\n", arr2);//abc
#include <string.h>
//	//strlen - 计算字符串长度  string length
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//如果不加结束标志0，则输出随机值
//	return 0;					 //EOF - end of file 文件结束标志
//}

//ASCII编码表
//@#$%acve
//a - 97
//A - 65

//转义字符 \n  - 换行
//int main()
//{
//	//printf("abcn");//abcn
//	//printf("abc\n");//abc
//	printf("(\rhow are you??)");// \r - 回车，输出时，\r以前的内容会被覆盖
//
//}

//int main()
//{
//	printf("%c\n", '\132');// \ddd ddd表示1-3个8进制数字 
//	printf("%c\n", '\x61');// \xdd dd表示两个16进制数字
//	return 0;
//}


//选择语句
//int main()
//{
//	int input = 0;//创建一个项
//	printf("你好\n");
//	printf("你要学C语言吗？(1/0)>:\n");
//	scanf("%d", &input);//输入值 -- 选择选项
//	if (input == 1)
//		printf("加油，你可以的\n");//选项1
//	else
//		printf("不学不行\n");//选项2
//	return 0;
//}

//练习
//int main()
//{
//	int input = 0;
//	int input1 = 0;
//	printf("判断以下问题对错\n");
//	printf("输入2/0回答问题\n");
//	printf("输入1开始回答问题\n");
//	scanf_s("%d", &input1);
//	if (input1 == 1)
//		printf("八进制是从0-7，逢8进1\n");
//	else
//		printf("请输入1\n");
//	rewind(stdin);
//	scanf_s("%d", &input);
//	if (input == 2)
//		printf("回答正确 +1分\n");
//	else
//		printf("回答错误 -1分\n");
//	return 0;
//}

//循环语句while
//int main() {
//
//	int high = 0;
//	printf("种一棵树吧，让它长的更高\n");
//	while (high < 2000)
//	{
//		printf("长的不够高\n");
//		printf("%d", high);
//		high++;
//	}
//	if (high >= 2000)
//		printf("哇！这棵树太高了吧！\n");
//	return 0;
//}

//自定义函数
//int Add(int x,int y)//定义参数x ,参数 y
//{
//	int z = x + y;//定义公式
//	return z;//返回结果
//}
//
//int main()
//{
//	int num1 = 20;
//	int num2 = 0;
//	int sum = 0;
//	sum = Add(num1,num2);
//	printf("%d\n", sum);
//	return 0;
//
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int e = 5;
//	//arr[10];//定义一个含有10个元素的数组
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//数组中对应着下标从0开始
//	//{1，2，3，4，5，6}
//	// 0，1，2，3，4，5
//	//printf("%d\n", arr[2]);//arr[下标]
//
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//int a = 5 / 2;  //取商
//	//int a = 5 % 2;  //取模（余数）
//	
//	//移(2进制)位操作符
//	//<<左移
//	//>>右移
//	int a = 1;
//	int b = a << 1;//int整形占4个字节，4 byte= 32 bits
//	//0000000000000...00001  二进制
//	//向左移动一位 -- 左边少一个0 右边补一个0
//	//000000000000...000010 二进制 -- 4
//	//即向左移动一位变成了4
// 
//  //注意此时a不变，b是变化后的a
//
//	printf("%d\n", b);//4
//	return 0;
//		
//		    
//}


// & 与
// | 或
// ^ 异或   ：对应的二进制位相同 -- 则为0
//			  对应的二进制位相异 -- 则为1
//单目操作符 !
//双目操作符 +   - 
//三目操作符
//
//  a + b ; + 两边有两个操作数，所以就是双目操作符

//C语言表示真假
// 0  -- 假
//非0 -- 真
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);//10
//	printf("%d\n", !a);//0
//	return 0;
//}

// sizeof()  
//计算变量的大小 ，单位字节
//int main() {
//	int a = 3;
//	int  arr[10] = { 0 };//创建数组前要先确定数组的字符类型 int,float...
//
//	printf("%d\n", sizeof(arr));//4字节
//	printf("%d\n", sizeof(a));//4字节
//	return 0;
//}