#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//void InitContact(pContact pcon)
//{
//	pcon->sz = 0;
//	memset(pcon->data, 0, MAX*sizeof(PeoInfo));
//}

pContact CheckCapacity(pContact pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		//增容
		pContact ptr = (pContact)realloc(pcon, sizeof(Contact)+(pcon->capacity + 2)*sizeof(PeoInfo));
		if (ptr != NULL)
			pcon = ptr;

		pcon->capacity += 2;
		printf("增容成功\n");
	}
	return pcon;
}

pContact LoadContact(pContact pcon)
{
	//打开文件
	FILE* pfread = fopen("contact.dat", "rb");
	PeoInfo tmp = { 0 };
	if (pfread == NULL)
	{
		printf("%s\n", strerror(errno));
		return NULL;
	}
	//读文件
	while (fread(&tmp,sizeof(PeoInfo),1,pfread))
	{
		//增容
		pcon = CheckCapacity(pcon);
		pcon->data[pcon->sz] = tmp;
		pcon->sz++;
	}
	//关闭文件
	fclose(pfread);
	pfread = NULL;
	return pcon;
}

pContact InitContact(pContact pcon)
{
	pcon->sz = 0;
	pcon->capacity = DEFAULT_SZ;
	memset(pcon->data, 0, pcon->capacity*sizeof(PeoInfo));     
	//加载文件中的通讯录信息
	pcon = LoadContact(pcon);
	return pcon;
}

void SaveContact(pContact pcon)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	int i = 0;
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return ;
	}
	//写数据
	for (i = 0; i < pcon->sz; i++)
	{
		fwrite(pcon->data + i, sizeof(PeoInfo), 1, pfWrite);
	}
	//关闭文件
	fclose(pfWrite);
	pfWrite = NULL;
}

void DestroyContact(pContact pcon)
{
	//保存文件
	SaveContact(pcon);
	free(pcon);
	pcon = NULL;
	printf("退出通讯录!\n");
	//printf("销毁通讯录\n");
}

pContact AddContact(struct Contact* pcon)
{
		//增容
		pcon = CheckCapacity(pcon);
//	if (pcon->sz < MAX)
//  {
		//录信息
		printf("请输入名字:>");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("请输入年龄:>");
		scanf("%d", &(pcon->data[pcon->sz].age));
		printf("请输入性别:>");
		scanf("%s", pcon->data[pcon->sz].sex);
		printf("请输入电话:>");
		scanf("%s", pcon->data[pcon->sz].tele);
		printf("请输入住址:>");
		scanf("%s", pcon->data[pcon->sz].addr);

		pcon->sz++;
		if (pcon->sz > 200)
		{
			Sleep(1000);
		}
		printf("添加成功!\n");
		return pcon;
}

void ShowContact(struct Contact* pcon)
{
	int i = 0;
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i<pcon->sz; i++)
	{
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[i].name,
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}

static int FindPeoByName(pContact pcon,char name[NAME_MAX])
{
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].name, name) == 0)
		{
			return i;
		}
	}
	//找不到
	return -1;
}

void DelContact(pContact pcon)
{
	int ret = 0;
	char name[NAME_MAX] = { 0 };
	int i = 0;
	if (pcon->sz == 0)
	{
		printf("通讯录已满，不能删除");
		return;
	}
	printf("请输入要删除人的姓名:>");
	scanf("%s", name);
	//按照姓名查找
	ret = FindPeoByName(pcon,name);
	if (-1 == ret)
	{
		printf("要删除的人不存在!\n");
	}
	else
	{
		//删除
		for (i = ret; i < pcon->sz-1 ; i++)
		{
			pcon->data[i] = pcon->data[i + 1];
		}
		pcon->sz--;
		if (pcon->sz > 200)
		{
			Sleep(1000);
		}
		printf("删除成功!\n");
	}
}

void SearchContact(pContact pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	printf("请输入要查找人的姓名:>");
	scanf("%s", name);
	pos = FindPeoByName(pcon, name);
	if (-1 == pos)
	{
		printf("要查找的人不存在!\n");
	}
	else
	{
		printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[pos].name,
				pcon->data[pos].age,
				pcon->data[pos].sex,
				pcon->data[pos].tele,
				pcon->data[pos].addr);
	}
}

void ModifyContact(pContact pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	printf("请输入要修改人的姓名:>");
	scanf("%s", name);
	pos = FindPeoByName(pcon, name);
	if (-1 == pos)
	{
		printf("要修改的人不存在!\n");
	}
	else
	{
		//修改信息
		printf("请输入名字:>");
		scanf("%s", pcon->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pcon->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pcon->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pcon->data[pos].tele);
		printf("请输入住址:>");
		scanf("%s", pcon->data[pos].addr);
		if (pcon->sz > 200)
		{
			Sleep(1000);
		}
		printf("修改成功!\n");
	}
}

//void qsort(void *base,
//	size_t num, 
//	size_t width,
//	int(*compare)(const void *elem1, const void *elem2));

int cmp_by_name(const void *elem1,const void *elem2)
{
	return strcmp(((PeoInfo *)elem1)->name, ((PeoInfo *)elem2)->name);
}

int cmp_by_age(const void *elem1, const void *elem2)
{
	return ((PeoInfo *)elem1)->age - ((PeoInfo *)elem2)->age;
}

int cmp_by_sex(const void *elem1, const void *elem2)
{
	return strcmp(((PeoInfo *)elem1)->sex, ((PeoInfo *)elem2)->sex);
}


int cmp_by_addr(const void *elem1, const void *elem2)
{
	return strcmp(((PeoInfo *)elem1)->addr, ((PeoInfo *)elem2)->addr);
}

int cmp_by_tele(const void *elem1, const void *elem2)
{
	return ((PeoInfo *)elem1)->tele - ((PeoInfo *)elem2)->tele;
}

void menu2()
{
	printf("                                \n");
	printf("********    1.按姓名    ********\n");
	printf("********    2.按年龄    ********\n");
	printf("********    3.按性别    ********\n");
	printf("********    4.按电话    ********\n");
	printf("********    5.按住址    ********\n");
	printf("                                \n");
}

//void sort(pContact pcon, int(*compare)(const void *elem1, const void *elem2))
//{
//	qsort(pcon->data, pcon->sz, sizeof(PeoInfo), int(*compare)(const void *elem1, const void *elem2));
//	printf("排序成功!");
//}

void SortContact(pContact pcon)
{
	int input2 = 0; 
	menu2();
	printf("请选择排序方式:>");
	scanf("%d", &input2);
	switch (input2)
	{
	case 1:
		qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_name);
		printf("排序成功!\n");
		break;
	case 2:
		qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_age);
		printf("排序成功!\n");
		break;
	case 3:
		qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_sex);
		printf("排序成功!\n");
		break;
	case 4:
		qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_tele);
		printf("排序成功!\n");
		break;
	case 5:
		qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_addr);
		printf("排序成功!\n");
		break;
	default:
		printf("选择错误!\n");
		break;
	}
}