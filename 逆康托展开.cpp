/***** �������ַ�������չʾ  �ַ����ɷ����Ժ� ******/
 
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
 
/*******���1-n�Ľ׳˱�*******/
int f[20];
int x, num;
 
void jie_cheng(int n)
{
    f[0] = f[1] = 1; // 0�Ľ׳�Ϊ1
    for(int i = 2; i <= n; i++) f[i] = f[i - 1] * i;
}
 
/**************������չ��**************/
 
vector<char> vec; //����Ҫ���е��ַ�
void rev_kangtuo(int k) //������Ϊ k ���ַ�����
{
    int n = vec.size(), len = 0;
    string ans = "";
    k--; // ���ʱ���ǰ� 12345 �ǵ�0λ
    for(int i = 1; i <= n; i++){
        int t = k / f[n - i]; // �� i λ��Ҫ �� t + 1 �����
        k %= f[n - i];        //ʣ�µļ�λ��Ҫ�ṩ��������
        ans += vec[t] ; //  vec[t] ���ǵ� t + 1 �����
        vec.erase(vec.begin() + t); 
//�ù���ɾ�ˣ�����vector�ñ���Ҳ���ԣ�����˵ö�٣�Ȼ��һ��һ���ıȽϴ�С������¼�м���û�ù����ַ����ֵ������С
    }
    cout << ans << '\n';
}
 
/***************************************/
// ����չ���󲻳���10λ
int main()
{
    jie_cheng(10); // Ԥ����ý׳�
    scanf("%d", &x); // ������Ҫ��չ��������
    /************������չ��***********/
    for(int i = 1; i <= 10; i++)
    {
    	if(x / f[i] == 0) // ��� x ��չ���������С��λ������������ĳ�ʼ��
    	{
    		num = i;
    		break;
    	}
    }
    for(int i = 1; i <= num; i++) vec.push_back(i + '0'); //�����λ��ֻҪ��С��num�Ϳ���
    rev_kangtuo(x);
}
