#include<stdio.h>

int main()
{
	//�ݺ���(Loop)
	//for (�ʱ⹮; ���ǹ�; ������)
	printf("for Start\n");
	for (int i = 0;i < 20 ; i += 2)
	{
		//break, continue
		if (i > 5)
		{
			continue;
			
			//break;
		}
		printf("continue : %d\n", i);
	}
	printf("for End\n");
	
	//=======================================================================

	//while (���ǹ�)
	// for(int i =0; i < 5; ++i)
	int i = 0;
	while (i < 5) // ���� while (1)�̷������� ���� ���ѷ����̴�.(Infinity Loop)
	{
		printf("while i : %d\n", i);
		++i;
		//Ż�⹮ 
		if (i > 4) break;
	}
}