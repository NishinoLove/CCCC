/***** �������ַ�������չʾ  �ַ����ɷ����Ժ� ******/
 
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
 
/*******���1-n�Ľ׳˱�*******/
int f[20];
void jie_cheng(int n)
{
    f[0] = f[1] = 1; // 0�Ľ׳�Ϊ1
    for(int i = 2; i <= n; i++) f[i] = f[i - 1] * i;
}
 
/**************����չ��****************/
string str;
int kangtuo()
{
    int ans = 1;  //ע�⣬��Ϊ 12345 ������0��ʼ����ģ������Ҫ��12345�����ǵ�һ��
    int len = str.length();
    for(int i = 0; i < len; i++){
        int tmp = 0;//����������
 
        for(int j = i + 1; j < len; j++){
            if(str[i] > str[j]) tmp++;
            //����str[i]�ǵڼ������������˵�����м�������С����
        }
 
        ans += tmp * f[len - i - 1];
    }
    return ans;
}
 
int main()
{
    jie_cheng(10);
    string str = "52413";
    cout<<kangtuo()<<endl;
}
