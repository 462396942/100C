#include "pch.h"
#include "PartOne.h"


PartOne::PartOne()
{
}


PartOne::~PartOne()
{
}

#define LEN 10

int PartOne::longest_plateau(int x[], int n)
{
	int  length = 1;         /* plateau length >= 1.     */
	int  i;

	//���������x[i] == x[i - length] ,��˵������ƽ̨��i����i-len֮���������ȣ�ƽ̨len���������㣬���������Ǽ������
	//����˼�뻹��ץסƽ̨�ĵı��ʣ�����ķ����Ǵ��ұߵ���ߣ��������˵�ǰlen���
	//�������Ϊ��һ�����Ϊlen+1�Ĳ���ȥ���ݣ����ӵĿ�Ȳ�ͣ������ֱ���������һ������
	for (i = 1; i < n; i++)
		if (x[i] == x[i - length])
			length++;
	return length;
}


void PartOne::platEauB()
{
	int  x[] = { 3, 4, 4, 7, 8, 9, 9, 9, 9, 10 };
	int  n = sizeof(x) / sizeof(int);
	int  i;

	printf("\nLongest Plateau Computation Program");
	printf("\n===================================");
	printf("\n\nThe Given Array :");
	for (i = 0; i < n; i++)
		printf("%5d", x[i]);
	printf("\n\nLength of the Longest Plateau is %d",
		longest_plateau(x, n));
}

//�����ƽ̨,��һ���Դ�
void PartOne::platEauA()
{
	int maxlen = 1;
	int currlen = 1;
	int a[LEN] = { 1,2,2,3,3,3,4,5,5,6 };//�����궨����� sizeof,��̫��
	int	targetNum = a[0];
	for (int i = 0; i < LEN; i++) {
		if (i + 1 < LEN&& a[i] == a[i + 1]) {
			currlen++;
			if (currlen > maxlen) {
				maxlen = currlen;
				targetNum = a[i];
			}
		}
		else
			currlen = 1;
	}

	printf("maxlen=%d,num=%d", maxlen, targetNum);

}
