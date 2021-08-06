#include<stdio.h>

int main()
{
	//반복문(Loop)
	//for (초기문; 조건문; 증감문)
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

	//while (조건문)
	// for(int i =0; i < 5; ++i)
	int i = 0;
	while (i < 5) // 만약 while (1)이런식으로 쓰면 무한루프이다.(Infinity Loop)
	{
		printf("while i : %d\n", i);
		++i;
		//탈출문 
		if (i > 4) break;
	}
}