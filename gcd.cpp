#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <cmath>

using namespace std;

#if 1

int lcd(int a, int b)
{
	int i, c = 0;

	for (i = 0; (i<a) && (i<b); i++)
	{
		if ((a % (i + 1) == 0) && (b % (i + 1) == 0)) c = i + 1;
	}

	return c;
}


int solution(vector<int> arr) {
	int answer = 0;

	int i;
	int _lcd = 0;
	
	for (i = 0; i<arr.size() - 1; i++)
	{
		_lcd = lcd(arr[i], arr[i + 1]);
		printf("lcd is : %d\r\n", _lcd);
		arr[i + 1] = arr[i] * arr[i + 1] / _lcd;
		answer = arr[i + 1];


	}

	return answer;
}

void main()
{
	vector<int> ar = {100,3,2,5,7,4,3,1};

	int a = solution(ar);
	printf("%d\r\n", a);

}

#endif