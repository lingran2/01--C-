#define _CRT_SECURE_NO_WARNINGS 
//���� _�ַ�_��ȫ_��_����
#include <stdio.h>

//����:
//--���泣��
//--const���εĳ�����
//--#define����ı�ʶ������
//--ö�ٳ���



//int main()
//{
//	3;//���泣����ֱ��һ��ֵ
//	100;
//	3.14;
//
//	//const ������
//	const int n = 10;
//	int arr[n] = { 0 };//n�Ǳ����������г����ԣ�����n�ǳ�����
//	return 0;			//int arr[3]����һ���������飬����3��Ԫ��
//
//}

//#define ����ı�ʶ������
//��define�����ֱ���ǳ���
//#define a 10   //ע��궨����治��Ҫ�� ;
//int main()
//{
//	int arr[a] = { 0 };//����һ�����飬��a��Ԫ�أ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	printf("%d\n", a);
//	return 0;
//

//ö�ٳ���
//�Ա��У�Ů
//��ɫ���죬�ƣ���

//ö�ٹؼ� --enum
//enum color //ö��������ɫ
//{
//	red,   //0 
//	yellow,//1
//	blue   //2
//};
//
//int main()
//{
//	enum color a = red;//��ö���и� a ��ֵΪred
//	printf("%d\n", a);//���Ϊ0��Ĭ������º죬�ƣ�����ֵΪ0��1��2
//	return 0;
//
//}

//�ַ���+ת���ַ�+ע��

//�ַ���--��˫��������Ķ������ַ���--"abcde"
//int main()
//{
//	char arr1[] = "abc";         //'a','b','c','\0'   \0���ַ��������ı�־
//	char arr2[] = { 'a','b','c' };//'a','b','c'
//	//���������Ԫ�ز�һ����arr1 �� arr2 ���0 ����������������һ��
//	//printf("%s\n", arr1);//abc
//	//��ӡ�ַ��� %s
//	//printf("%s\n", arr2);//abc ������
//	return 0;
//}

//��ȷӦ����
//int main()
//{
//	char arr1[] = "abc";         
//	char arr2[] = { 'a','b','c',0};// \0 - 0
//	printf("%s\n", arr1);//abc
//	printf("%s\n", arr2);//abc
#include <string.h>
//	//strlen - �����ַ�������  string length
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//������ӽ�����־0����������ֵ
//	return 0;					 //EOF - end of file �ļ�������־
//}

//ASCII�����
//@#$%acve
//a - 97
//A - 65

//ת���ַ� \n  - ����
//int main()
//{
//	//printf("abcn");//abcn
//	//printf("abc\n");//abc
//	printf("(\rhow are you??)");// \r - �س������ʱ��\r��ǰ�����ݻᱻ����
//
//}

//int main()
//{
//	printf("%c\n", '\132');// \ddd ddd��ʾ1-3��8�������� 
//	printf("%c\n", '\x61');// \xdd dd��ʾ����16��������
//	return 0;
//}


//ѡ�����
//int main()
//{
//	int input = 0;//����һ����
//	printf("���\n");
//	printf("��ҪѧC������(1/0)>:\n");
//	scanf("%d", &input);//����ֵ -- ѡ��ѡ��
//	if (input == 1)
//		printf("���ͣ�����Ե�\n");//ѡ��1
//	else
//		printf("��ѧ����\n");//ѡ��2
//	return 0;
//}

//��ϰ
//int main()
//{
//	int input = 0;
//	int input1 = 0;
//	printf("�ж���������Դ�\n");
//	printf("����2/0�ش�����\n");
//	printf("����1��ʼ�ش�����\n");
//	scanf_s("%d", &input1);
//	if (input1 == 1)
//		printf("�˽����Ǵ�0-7����8��1\n");
//	else
//		printf("������1\n");
//	rewind(stdin);
//	scanf_s("%d", &input);
//	if (input == 2)
//		printf("�ش���ȷ +1��\n");
//	else
//		printf("�ش���� -1��\n");
//	return 0;
//}

//ѭ�����while
//int main() {
//
//	int high = 0;
//	printf("��һ�����ɣ��������ĸ���\n");
//	while (high < 2000)
//	{
//		printf("���Ĳ�����\n");
//		printf("%d", high);
//		high++;
//	}
//	if (high >= 2000)
//		printf("�ۣ������̫���˰ɣ�\n");
//	return 0;
//}

//�Զ��庯��
//int Add(int x,int y)//�������x ,���� y
//{
//	int z = x + y;//���幫ʽ
//	return z;//���ؽ��
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
//	//arr[10];//����һ������10��Ԫ�ص�����
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�����ж�Ӧ���±��0��ʼ
//	//{1��2��3��4��5��6}
//	// 0��1��2��3��4��5
//	//printf("%d\n", arr[2]);//arr[�±�]
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
//	//int a = 5 / 2;  //ȡ��
//	//int a = 5 % 2;  //ȡģ��������
//	
//	//��(2����)λ������
//	//<<����
//	//>>����
//	int a = 1;
//	int b = a << 1;//int����ռ4���ֽڣ�4 byte= 32 bits
//	//0000000000000...00001  ������
//	//�����ƶ�һλ -- �����һ��0 �ұ߲�һ��0
//	//000000000000...000010 ������ -- 4
//	//�������ƶ�һλ�����4
// 
//  //ע���ʱa���䣬b�Ǳ仯���a
//
//	printf("%d\n", b);//4
//	return 0;
//		
//		    
//}


// & ��
// | ��
// ^ ���   ����Ӧ�Ķ�����λ��ͬ -- ��Ϊ0
//			  ��Ӧ�Ķ�����λ���� -- ��Ϊ1
//��Ŀ������ !
//˫Ŀ������ +   - 
//��Ŀ������
//
//  a + b ; + ���������������������Ծ���˫Ŀ������

//C���Ա�ʾ���
// 0  -- ��
//��0 -- ��
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);//10
//	printf("%d\n", !a);//0
//	return 0;
//}

// sizeof()  
//��������Ĵ�С ����λ�ֽ�
//int main() {
//	int a = 3;
//	int  arr[10] = { 0 };//��������ǰҪ��ȷ��������ַ����� int,float...
//
//	printf("%d\n", sizeof(arr));//4�ֽ�
//	printf("%d\n", sizeof(a));//4�ֽ�
//	return 0;
//}