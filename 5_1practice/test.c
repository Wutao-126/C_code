//#include<stdio.h>
//int check_sys()
//{
//	int a = 1;
//	return *((char*)&a);
//	//char* p = (char*)&a;
//	//return *p;
//	//返回1：小端
//	//返回0：大端
//	/*if (*p == 1)
//		return 1;
//	else
//		return 0;*/
//}
//int main()//判断当前机器的字节序
//{
//	/*int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("小端");
//	else
//		printf("大端");*/
//	
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端");
//	else
//		printf("大端");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = -1;//-1的二进制序列：11111111111111111111111111111111
//	//存在a里面会被截断11111111
//	signed char b = -1;
//	//11111111
//	unsigned char c = -1;
//	//11111111
//	printf("a = %d,b = %d,c = %d", a, b, c);
//	//打印的是整形，所以需要整型提升
//	//a(是有符号数，补符号位):11111111111111111111111111111111
//	//b(是有符号数，补符号位):11111111111111111111111111111111
//	//c(是无符号数，补0)：00000000000000000000000011111111（255）
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	char a = -128;
//	//-128的二进制序列：10000000000000000000000010000000  原码
//	//                  11111111111111111111111101111111  反码 
//	//                  11111111111111111111111110000000  补码
//	//                  存在a里面被截断为:10000000
//	printf("%u\n", a);//%d:打印十进制的有符号数字；%u：打印十进制的无符号数字
//	//打印的是十进制需要整形提升；因为a原本是有符号数字，所以前面补符号位（1）
//	//11111111111111111111111110000000 (4,294,967,168)
//	return 0;
//}

#include<stdio.h>
int main()
{
	char a = 128;
	printf("%d", a);
	return 0;
}