#include <stdio.h>

void blahblahMethod(int fuckingArray, int lengthOfFuckingArray)
{
	int sum = 0, leftSum = 0;
	for(int x = 0; x < lengthOfFuckingArray; x++)
	{
		sum += fuckingArray[x];
	}
	for(int x = 0; x < lengthOfFuckingArray; x++)
	{
		sum -= fuckingArray[x];
		if(sum == leftSum)
		{
			return x;
		}
		leftSum += fuckingArray[x];
	}
	return -1;
}

main()
{
	blahblahMethod();
	printf("\n");
	system("pause");
	return 0;
}