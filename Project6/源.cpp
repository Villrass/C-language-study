#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//int main()
//{
//	cout << "hello" << endl;
//	system("pause");
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	int b;
	int c;
	cout << "�����������ֿ�ʼ��Ϸ" << endl;
	cin >> b;

	int num = rand() % 100 + 1;
	int a;
	while (true) {
		cout << "����������:" << endl;
		cin >> a;
		if (a < num)
			cout << "��������ֹ�С" << endl;
		else if (a > num)
			cout << "��������ֹ���" << endl;
		else
		{

			cout << "��ȷ" << endl;
			c++;  // �¶Ժ����ӷ���
			cout << "�����ڵķ���Ϊ��" << c << endl;
			cout << "������Ϸ�밴1���˳���Ϸ�밴0" << endl;
			int game;
			cin >> game;
			if (1 == game)
			{
				num = rand() % 100 + 1;
				cout << "��ʼ��һ����Ϸ��" << endl;
			}
			else if (0 == game)
			{
				break;
			}


		}
	}
		return 0;
}
//#include<iostream>
//#include<cstdlib>  // ����rand()��srand()
//#include<ctime>    // ����time()
//using namespace std;
//
//int main()
//{
//    int score = 0;  // ��b������Ϊscore��ʹ���������
//    cout << "�����������ֿ�ʼ��Ϸ" << endl;
//    int start;
//    cin >> start;  // ��ȡ��ʼ��Ϸ�����룬����Ҫendl
//
//    // ��ʼ�����������
//    srand(time(0));
//    int num = rand() % 100 + 1;  // ����1-100֮��������
//
//    int guess;
//    while (true) {  // ʹ������ѭ����ֱ���¶��˳�
//        cout << "����������:" << endl;
//        cin >> guess;  // ��ȡ�²������
//
//        if (guess < num)
//            cout << "��������ֹ�С" << endl;
//        else if (guess > num)
//            cout << "��������ֹ���" << endl;
//        else
//        {
//            // �����µ��������׼����һ����Ϸ
//           
//        }
//    }
//
//    return 0;
//}