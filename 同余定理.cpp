#include <iostream>
#include <cstdio>
#define N 9  //�˳���Ϊһ���Խ⣬�ڴ�ֻ����9��Ϊ����
using namespace std;
char num[1000005];
 
int main(void)
{
    int m;
    cin >> m;
    while (m--)
    {
        int i;
        long long rem;
        rem = i = 0;
        scanf("%s",num);
        for (i = 0;num[i] != '\0';i++)
        {
            num[i] -= '0';
            if (i == 0)
                rem = num[i];
            else
                rem = ((rem % N) * (10 % N) + (num[i] % N)) % N;  //ͬ�ඨ��
        }
        cout << rem <<endl;
    }
    return 0;
}
