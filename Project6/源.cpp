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
	cout << "输入任意数字开始游戏" << endl;
	cin >> b;

	int num = rand() % 100 + 1;
	int a;
	while (true) {
		cout << "请输入数字:" << endl;
		cin >> a;
		if (a < num)
			cout << "输入的数字过小" << endl;
		else if (a > num)
			cout << "输入的数字过大" << endl;
		else
		{

			cout << "正确" << endl;
			c++;  // 猜对后增加分数
			cout << "你现在的分数为：" << c << endl;
			cout << "继续游戏请按1，退出游戏请按0" << endl;
			int game;
			cin >> game;
			if (1 == game)
			{
				num = rand() % 100 + 1;
				cout << "开始新一轮游戏！" << endl;
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
//#include<cstdlib>  // 用于rand()和srand()
//#include<ctime>    // 用于time()
//using namespace std;
//
//int main()
//{
//    int score = 0;  // 将b重命名为score，使语义更清晰
//    cout << "输入任意数字开始游戏" << endl;
//    int start;
//    cin >> start;  // 读取开始游戏的输入，不需要endl
//
//    // 初始化随机数种子
//    srand(time(0));
//    int num = rand() % 100 + 1;  // 生成1-100之间的随机数
//
//    int guess;
//    while (true) {  // 使用无限循环，直到猜对退出
//        cout << "请输入数字:" << endl;
//        cin >> guess;  // 读取猜测的数字
//
//        if (guess < num)
//            cout << "输入的数字过小" << endl;
//        else if (guess > num)
//            cout << "输入的数字过大" << endl;
//        else
//        {
//            // 生成新的随机数，准备下一轮游戏
//           
//        }
//    }
//
//    return 0;
//}