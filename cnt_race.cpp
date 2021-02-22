#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <cmath>

#define logB(x) log(x)/log(2)

using namespace std;


#if 1

int solution(int n, int a, int b)
{
	int answer = 0;
	int t_a = a;
	int t_b = b;

	t_a = (t_a % 2 == 0) ? t_a : t_a + 1;
	t_b = (t_b % 2 == 0) ? t_b : t_b + 1;

	int tmp = 0;
	int i = 0;
	
	printf("A : %d, B : %d\r\n", t_a, t_b);
	
	if (t_a == t_b) i = 1;
	
	while (t_a!=t_b)
	{
		tmp = pow(2, i);

		t_a = ((t_a / tmp) % 2 == 0) ? t_a : t_a + tmp;
		t_b = ((t_b / tmp) % 2 == 0) ? t_b : t_b + tmp;

		printf("[%d] t_a : %d  t_b : %d\r\n", i, t_a, t_b);
		i++;
		
	}

	answer = i;

	return answer;
}

void main()
{
	int a = solution(16, 5, 2);
	
	printf("%d\r\n", a);

}