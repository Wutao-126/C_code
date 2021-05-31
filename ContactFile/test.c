# define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void menu()
{
	printf("***********************************\n");
	printf("***** 1.add          2.del ********\n");
	printf("***** 3.search       4.modify *****\n");
	printf("***** 5.show         6.sort *******\n");
	printf("******7.save         8.empty ******\n");
	printf("************ 0.exit ***************\n");
	printf("***********************************\n");
}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;// con就是通讯录：date指针和size,capacity
	//初始化通讯录
	Initcontact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Addcontact(&con);
			break;
		case DEL:
			Delcontact(&con);
			break;
		case SEARCH:
			Search(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			//销毁通讯录--释放动态开辟的内存
			SaveContact(&con);
			DestroyContact(&con);
			printf("退出通讯录");
			break;
		case SAVE:
			SaveContact(&con);
			break;
		case EMPTY:
			EmptyContact(&con);
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}