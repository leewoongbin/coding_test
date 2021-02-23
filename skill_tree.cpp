#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <cmath>

using namespace std;

#if 1
int solution(string skill, vector<string> skill_trees) {
	int answer = 0;

	int i, j;

	

	for (i = 0; i<skill_trees.size(); i++)
	{
		int cnt = 0;
		bool f = true;
		for (j = 0; j<skill_trees[i].length(); j++)
		{
			int tmp = skill.find(skill_trees[i][j]);
			if (cnt == tmp) cnt++;
			else if (tmp > cnt)
			{
				printf("[%d][%d]tmp is %d\r\n", i,j,tmp);
				f = false;
				break;
			}
		}
		if (f) {
			printf("compile %d\r\n", i);
			answer++;
		}
	}



	return answer;
}

void main()
{
	string skill = "CBD";
	vector<string> skill_trees = {"BACDE", "CBADF", "AECB", "BDA"};
	int a = solution(skill, skill_trees);

	printf("%d\r\n", a);

}


#endif