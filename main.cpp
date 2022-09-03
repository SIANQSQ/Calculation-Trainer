/*
       算数训练器 ---屈圣桥
       源代码展示-->    2022.2.16     屈圣桥
*/
/*
       目录：
	   Part 1：启动程序                       ............14 行
	   Part 2：算数训练器 主程序              ............609 行
	   Part 3：计时器                         ............1265行

       检验使用 Visual Studio 或 DEV-C++等代码编辑器打开此文档
*/

//Part 1 启动程序
void Part 1 启动程序
{
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<time.h>
#include<string>
#include<windows.h>
#include <mmsystem.h>
#include<fstream>
#include <cassert>

#pragma comment (lib,"winmm.lib")

using namespace std;

char YES = 'Y';
char NO = 'N';
char A = 'A';
char B = 'B';
char C = 'C';
char D = 'D';
char E = 'E';
char F = 'F';
char G = 'G';
char H = 'H';

char I = 'I';
char J = 'J';
char K = 'k';
char L = 'L';
char M = 'M';
char N = 'N';
char O = 'O';
char P = 'p';
char Q = 'Q';
char R = 'R';

char ReadText(string file)
{
	ifstream infile;
	infile.open(file.data());
	assert(infile.is_open());
	char c;
	infile >> c;
	infile.close();
	return c;
}


void TopWindow(HWND& hWnd) {
	SetWindowPos(hWnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
}

void PlayOpenSound()
{
	PlaySound(TEXT("Open.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

void StopPlaySound()
{
	PlaySound(NULL, NULL, SND_FILENAME | SND_ASYNC);
}

void OutPutColor(char COLOR)
{
	if (COLOR == I)
	{
		cout << "黑底白字" << endl;
	}
	if (COLOR == J)
	{
		cout << "黑底绿字" << endl;
	}
	if (COLOR == K)
	{
		cout << "黑底蓝字" << endl;
	}
	if (COLOR == L)
	{
		cout << "白底黑字" << endl;
	}
	if (COLOR == M)
	{
		cout << "白底红字" << endl;
	}
	if (COLOR == N)
	{
		cout << "白底蓝字" << endl;
	}
	if (COLOR == O)
	{
		cout << "白底暗红" << endl;
	}
	if (COLOR == P)
	{
		cout << "白底绿字" << endl;
	}
	if (COLOR == Q)
	{
		cout << "白底亮蓝" << endl;
	}
	if (COLOR == R)
	{
		cout << "白底紫字" << endl;
	}
}

void ChangeColor(char CHCOL)
{
	ofstream cchange("Color.ini");
	cchange << CHCOL;
	cchange.clear();
	cchange.close();
	system("cls");
	cout << "主程序背景颜色已更改为:";
	OutPutColor(CHCOL);
	if (CHCOL == I)
	{
		MessageBox(NULL, TEXT("主程序背景颜色已更改为 黑底白字"), TEXT("系统提示"), MB_OK + 64);
		//cout << "黑底白字" << endl;
	}
	if (CHCOL == J)
	{
		MessageBox(NULL, TEXT("主程序背景颜色已更改为 黑底绿字"), TEXT("系统提示"), MB_OK + 64);
		//cout << "黑底绿字" << endl;
	}
	if (CHCOL == K)
	{
		MessageBox(NULL, TEXT("主程序背景颜色已更改为 黑底蓝字"), TEXT("系统提示"), MB_OK + 64);
		//cout << "黑底蓝字" << endl;
	}
	if (CHCOL == L)
	{
		MessageBox(NULL, TEXT("主程序背景颜色已更改为 白底黑字"), TEXT("系统提示"), MB_OK + 64);
		//cout << "白底黑字" << endl;
	}
	if (CHCOL == M)
	{
		MessageBox(NULL, TEXT("主程序背景颜色已更改为 白底红字"), TEXT("系统提示"), MB_OK + 64);
		//cout << "白底红字" << endl;
	}
	if (CHCOL == N)
	{
		MessageBox(NULL, TEXT("主程序背景颜色已更改为 白底蓝字"), TEXT("系统提示"), MB_OK + 64);
		//cout << "白底蓝字" << endl;
	}
	if (CHCOL == O)
	{
		MessageBox(NULL, TEXT("主程序背景颜色已更改为 白底暗红"), TEXT("系统提示"), MB_OK + 64);
		//cout << "白底暗红" << endl;
	}
	if (CHCOL == P)
	{
		MessageBox(NULL, TEXT("主程序背景颜色已更改为 白底绿字"), TEXT("系统提示"), MB_OK + 64);
		//cout << "白底绿字" << endl;
	}
	if (CHCOL == Q)
	{
		MessageBox(NULL, TEXT("主程序背景颜色已更改为 白底亮蓝"), TEXT("系统提示"), MB_OK + 64);
		//cout << "白底亮蓝" << endl;
	}
	if (CHCOL == R)
	{
		MessageBox(NULL, TEXT("主程序背景颜色已更改为 白底紫字"), TEXT("系统提示"), MB_OK + 64);
		//cout << "白底紫字" << endl;
	}
}

int main()
{
	HWND hWnd = GetForegroundWindow();
	TopWindow(hWnd);

	int mode, setting, snd, clr;


	char VOLUME;
	char SONGNAME;
	char FULLSCREEN;
	char COLOR;
	system("title 算数训练器 --启动");
	system("mode con:cols=30 lines=20");

	VOLUME = ReadText("Volume.ini");
	if (VOLUME == YES) PlayOpenSound();
	else StopPlaySound();

rego:
	system("mode con:cols=30 lines=20");
	system("cls");
	cout << "欢迎使用算术训练器" << endl;
	cout << "----屈圣桥 2022.1.25" << endl;
	cout << "1.开始练习" << endl;
	cout << "2.查看练习记录" << endl;
	cout << "3.复习错题" << endl;
	cout << "4.查看使用说明" << endl;
	cout << "5.作者及相关信息" << endl;
	cout << "6.设置" << endl;
	cout << "0.退出" << endl;

	cout << "请输入您的选择：";
	cin >> mode;
	switch (mode)
	{
	case 1:
		system("start 算数训练器.exe");
		exit(0);
		break;

	case 2:
		system("start 统计数据.txt");
		exit(0);
		break;

	case 3:
		system("start 复习题库.txt");
		exit(0);
		break;

	case 4:
		system("start 使用说明.txt");
		goto rego;
		break;

	case 5:
		system("start 作者信息.txt");
		exit(0);
		break;

	case 6:
	reset:
		system("title 算数训练器 --设置");
		VOLUME = ReadText("Volume.ini");
		SONGNAME = ReadText("SoundSelect.ini");
		FULLSCREEN = ReadText("Screen.ini");
		COLOR = ReadText("Color.ini");
		system("mode con:cols=50 lines=20");
		system("cls");
		cout << "设置" << endl;
		cout << "1.启动音效";
		{                 //显示键值
			if (VOLUME == YES) cout << "              开" << endl;
			if (VOLUME == NO) cout << "              关" << endl;
		}
		cout << "2.主程序背景音乐";
		{                //显示键值
			if (SONGNAME == A) cout << "        雪之梦" << endl;
			else if (SONGNAME == B) cout << "        眼泪" << endl;
			else if (SONGNAME == C) cout << "        秋日私语" << endl;
			else if (SONGNAME == D) cout << "        梦中的婚礼" << endl;
			else if (SONGNAME == E) cout << "        安妮的仙境" << endl;
			else if (SONGNAME == F) cout << "        自定义音乐 1" << endl;
			else if (SONGNAME == G) cout << "        自定义音乐 2" << endl;
			else if (SONGNAME == H) cout << "        自定义音乐 3" << endl;
			else cout << "        关" << endl;
		}
		cout << "3.主程序全屏            ";
		{                //显示键值
			if (FULLSCREEN == YES) cout << "开" << endl;
			else cout << "关" << endl;
		}
		cout << "4.主程序颜色            ";
		{
			OutPutColor(COLOR);
		}

		cout << "0.返回" << endl << endl;
		cout << "请输入您要更改的设置:";
		cin >> setting;
		switch (setting)
		{
		case 1:
			system("title 设置--启动音效");
			if (VOLUME == YES)
			{
				if (MessageBox(NULL, TEXT("是否要关闭启动音效？"), TEXT("参数设置"), MB_YESNO + 32) == 6) {
					ofstream change("Volume.ini");
					change << NO;
					change.clear();
					change.close();
					StopPlaySound();
					system("cls");
					cout << "启动音效已关闭";
					MessageBox(NULL, TEXT("启动音效已关闭"), TEXT("系统提示"), MB_OK + 64);

					goto reset;
				}
				else
				{
					goto reset;
				}
			}
			else if (VOLUME == NO)
			{
				if (MessageBox(NULL, TEXT("是否要打开启动音效？"), TEXT("参数设置"), MB_YESNO + 32) == 6) {
					ofstream change("Volume.ini");
					change << YES;
					change.clear();
					change.close();
					PlayOpenSound();
					system("cls");
					cout << "启动音效已打开";
					MessageBox(NULL, TEXT("启动音效已打开"), TEXT("系统提示"), MB_OK + 64);
					goto reset;
				}
				else
				{
					goto reset;
				}
			}

			break;

		case 2:
		{
		resong:
			system("title 设置--主程序背景音乐");
			system("cls");
			cout << "设置" << endl;
			cout << "主程序背景音乐更改：" << endl;
			cout << "1.雪之梦" << endl;
			cout << "2.眼泪" << endl;
			cout << "3.秋日私语" << endl;
			cout << "4.梦中的婚礼" << endl;
			cout << "5.安妮的仙境" << endl;
			cout << "6.自定义音乐 1" << endl;
			cout << "7.自定义音乐 2" << endl;
			cout << "8.自定义音乐 3" << endl;
			cout << "9.关闭" << endl;
			cout << "0.返回" << endl << endl;
			cout << "请输入相应数字序号更改音乐" << endl;
			cout << "您要更改为：";

			cin >> snd;

			switch (snd)
			{

			case 1: {
				ofstream schange("SoundSelect.ini");
				schange << A;
				schange.clear();
				schange.close();
				system("cls");
				cout << "主程序背景音乐已更改为 雪之梦" << endl;
				MessageBox(NULL, TEXT("主程序背景音乐已更改为 雪之梦"), TEXT("系统提示"), MB_OK + 64);
				goto reset;
				break; }

			case 2: {
				ofstream schange("SoundSelect.ini");
				schange << B;
				schange.clear();
				schange.close();
				system("cls");
				cout << "主程序背景音乐已更改为 眼泪" << endl;
				MessageBox(NULL, TEXT("主程序背景音乐已更改为 眼泪"), TEXT("系统提示"), MB_OK + 64);
				goto reset;
				break; }

			case 3: {
				ofstream schange("SoundSelect.ini");
				schange << C;
				schange.clear();
				schange.close();
				system("cls");
				cout << "主程序背景音乐已更改为 秋日私语" << endl;
				MessageBox(NULL, TEXT("主程序背景音乐已更改为 秋日私语"), TEXT("系统提示"), MB_OK + 64);
				goto reset;
				break; }

			case 4:
			{ofstream schange("SoundSelect.ini");
			schange << D;
			schange.clear();
			schange.close();
			system("cls");
			cout << "主程序背景音乐已更改为 梦中的婚礼" << endl;
			MessageBox(NULL, TEXT("主程序背景音乐已更改为 梦中的婚礼"), TEXT("系统提示"), MB_OK + 64);
			goto reset;
			break; }

			case 5:
			{ofstream schange("SoundSelect.ini");
			schange << E;
			schange.clear();
			schange.close();
			system("cls");
			cout << "主程序背景音乐已更改为 安妮的仙境" << endl;
			MessageBox(NULL, TEXT("主程序背景音乐已更改为 安妮的仙境"), TEXT("系统提示"), MB_OK + 64);
			goto reset;
			break; }

			case 6:
			{ofstream schange("SoundSelect.ini");
			schange << F;
			schange.clear();
			schange.close();
			system("cls");
			cout << "主程序背景音乐已更改为 自定义音乐 1" << endl;
			MessageBox(NULL, TEXT("主程序背景音乐已更改为 自定义音乐 1"), TEXT("系统提示"), MB_OK + 64);
			goto reset;
			break; }

			case 7:
			{ofstream schange("SoundSelect.ini");
			schange << G;
			schange.clear();
			schange.close();
			system("cls");
			cout << "主程序背景音乐已更改为 自定义音乐 2" << endl;

			MessageBox(NULL, TEXT("主程序背景音乐已更改为 自定义音乐 2"), TEXT("系统提示"), MB_OK + 64);
			goto reset;
			break; }

			case 8:
			{
				ofstream schange("SoundSelect.ini");

				schange << H;
				schange.clear();
				schange.close();
				system("cls");
				cout << "主程序背景音乐已更改为 自定义音乐 3" << endl;

				MessageBox(NULL, TEXT("主程序背景音乐已更改为 自定义音乐 3"), TEXT("系统提示"), MB_OK + 64);
				goto reset;
				break; }

			case 9:
			{
				string opt = "SoundSelect.ini";
				ofstream file_writer(opt, ios_base::out);
				system("cls");
				cout << "主程序背景音乐已关闭" << endl;

				MessageBox(NULL, TEXT("主程序背景音乐已关闭"), TEXT("系统提示"), MB_OK + 64);
				goto reset;
				break;
			}
			case 0:
				goto reset;
				break;

			default:
				system("cls");
				cout << "不接受的指令,请重新选择";
				MessageBox(NULL, TEXT("不接受的指令,请重新选择"), TEXT("系统提示"), MB_OK + 16);
				goto resong;
			}
		}
		case 3:
		{
			system("title 设置--主程序全屏启动");
			if (FULLSCREEN == YES)
			{
				if (MessageBox(NULL, TEXT("是否要关闭全屏启动？"), TEXT("参数设置"), MB_YESNO + 32) == 6) {
					ofstream change("Screen.ini");
					change << NO;
					change.clear();
					change.close();
					system("cls");
					cout << "主程序全屏启动已关闭";
					MessageBox(NULL, TEXT("主程序全屏启动已 关闭"), TEXT("系统提示"), MB_OK + 64);
					goto reset;
				}
				else
				{
					goto reset;
				}
			}
			else if (FULLSCREEN == NO)
			{
				if (MessageBox(NULL, TEXT("是否要打开全屏启动？"), TEXT("参数设置"), MB_YESNO + 32) == 6) {
					ofstream change("Screen.ini");
					change << YES;
					change.clear();
					change.close();
					system("cls");
					cout << "主程序全屏启动已开启";
					MessageBox(NULL, TEXT("主程序全屏启动已 开启"), TEXT("系统提示"), MB_OK + 64);
					goto reset;
				}
				else
				{
					goto reset;
				}
			}
		}

		case 4:
		{
		recolor:
			system("title 设置--主程序背景颜色");
system("cls");
cout << "设置" << endl;
cout << "主程序当前颜色:" << endl;
OutPutColor(COLOR);
cout << "可更改颜色:" << endl;
cout << "1.黑底白字" << endl;
cout << "2.黑底绿字" << endl;
cout << "3.黑底蓝字" << endl;
cout << "4.白底黑字" << endl;
cout << "5.白底红字" << endl;
cout << "6.白底蓝字" << endl;
cout << "7.白底暗红" << endl;
cout << "8.白底绿字" << endl;
cout << "9.白底亮蓝" << endl;
cout << "10.白底紫字" << endl;
cout << "0.返回" << endl;
cout << "请输入您要更改颜色的序号:";
cin >> clr;
switch (clr)
{
case 1:  //I 
	ChangeColor(I);
	goto reset;

	break;
case 2:  //J
	ChangeColor(J);
	goto reset;
	break;
case 3:  //K
	ChangeColor(K);
	goto reset;
	break;
case 4:  //L
	ChangeColor(L);
	goto reset;
	break;
case 5:  //M
	ChangeColor(M);
	goto reset;
	break;
case 6:  //N
	ChangeColor(N);
	goto reset;
	break;
case 7:  //O
	ChangeColor(O);
	goto reset;
	break;
case 8:  //P
	ChangeColor(P);
	goto reset;
	break;
case 9:  //Q
	ChangeColor(Q);
	goto reset;
	break;
case 10:  //R
	ChangeColor(R);
	goto reset;
	break;
case 0:
	goto reset;

default:
	system("cls");
	cout << "不接受的指令,请重新选择";
	MessageBox(NULL, TEXT("不接受的指令,请重新选择"), TEXT("系统提示"), MB_OK + 16);
	goto recolor;
}
		}

		case 0:
			goto rego;

		default:
			system("cls");
			cout << "不接受的指令,请重新选择";
			MessageBox(NULL, TEXT("不接受的指令,请重新选择"), TEXT("系统提示"), MB_OK + 16);
			goto reset;
		}
	case 7:
		exit(0);
		break;

	default:
		system("cls");
		cout << "不接受的指令,请重新选择";
		MessageBox(NULL, TEXT("不接受的指令,请重新选择"), TEXT("系统提示"), MB_OK + 16);
		goto rego;
	}


}

}

//Part 2 主程序
void Part 2 主程序
{
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<time.h>
#include<string>
#include<windows.h>
#include <mmsystem.h>
#include<fstream>
#include <cassert>

#pragma comment (lib,"winmm.lib")

#define min 2
#define max 10
#define reset 100

char YES = 'Y';
char NO = 'N';
char A = 'A';
char B = 'B';
char C = 'C';
char D = 'D';
char E = 'E';
char F = 'F';
char G = 'G';
char H = 'H';

char I = 'I';
char J = 'J';
char K = 'k';
char L = 'L';
char M = 'M';
char N = 'N';
char O = 'O';
char P = 'p';
char Q = 'Q';
char R = 'R';


int score;
int PositionX, PositionY;
int situation;
using namespace std;

void Position(int x, int y) {
	COORD pos = { x,y };
	HANDLE Out = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(Out, pos);
}

void Instruction() {
	printf("\t\t 欢迎使用算数训练器 \n");
	printf("\t 制作者---屈圣桥  2021.12.30 \n");
	printf("\t 功能：可以自由设定模式及参数，来提高计算能力\n");
	printf("\t 使用方法：\n");
	printf("\t 1.输入题目数量（大于等于 1 的正整数）\n");
	printf("\t 2.选择模式：\n");
	printf("\t\t （1）加法模式 --全部是加法运算\n");
	printf("\t\t （2）减法模式 --全部是减法运算\n");
	printf("\t\t （3）乘法模式 --全部是乘法运算\n");
	printf("\t\t （4）除法模式 --全部是除法运算\n");
	printf("\t\t （5）混合模式 --加减混合运算，适合有能力的人训练\n");
	printf("\t 请在模式选择时输入以上文字!\n");
	printf("\t 3.选择难度\n");
	printf("\t （1）易 --适合初学者使用\n");
	printf("\t （2）中 --适合比较熟练的学者使用\n");
	printf("\t （3）难 --适合高能力学者使用\n");
	printf("\t 4.计分系统\n");
	printf("\t 答对一道题可得 10 分\n");
	printf("\t 答错一道题会扣 10 分\n");
	printf("\t 5.计时功能\n");
	printf("\t （1）计时模式:可记录从练习开始到某一时刻的时间\n");
	printf("\t （2）限时模式:用户可自定限时时间,时间到之后会自动播放铃声,督促练习者加快练习效率\n\n");
	printf("\t\t\t\t-------屈圣桥\n");
	Sleep(5000);
	if (MessageBox(NULL, TEXT("是否要开始？"), TEXT("是否要开始"), MB_YESNO + 32) == 6) {
		system("cls");
	}
	else exit(0);

}
void GetScore() {
	score += 10;
}

void LoseScore() {
	score -= 10;
}

void Judge(int input, int answer) {
	if (input == answer) {
		cout << "                                         对啦!  得十分!" << endl;
		GetScore();
	}
	else {
		cout << "                                          错啦!扣十分!" << endl;
		LoseScore();
	}
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hConsole, &csbi);
	COORD coordScreen = { PositionX, PositionY }; //光标位置
	PositionX = csbi.dwCursorPosition.X;
	PositionY = csbi.dwCursorPosition.Y;
	Position(100, 0);
	cout << "               ";
	Position(100, 0);
	cout << "得分:" << score;
	Position(PositionX, PositionY);
}

void PlaySound(int sgn)
{
	switch (sgn)
	{
	case 1: {PlaySound(TEXT("01雪之梦.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); break; }
	case 2: {PlaySound(TEXT("02眼泪.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); break; }
	case 3: {PlaySound(TEXT("03秋日私语.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); break; }
	case 4: {PlaySound(TEXT("04梦中的婚礼.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); break; }
	case 5: {PlaySound(TEXT("05安妮的仙境.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); break; }
	case 6: {PlaySound(TEXT("自定义音乐1.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); break; }
	case 7: {PlaySound(TEXT("自定义音乐2.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); break; }
	case 8: {PlaySound(TEXT("自定义音乐3.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); break; }
	}

}

void StopPlaySound()
{
	PlaySound(NULL, NULL, SND_FILENAME | SND_ASYNC);
}

string getTime() {
	time_t timep;
	time(&timep);
	char tmp[64];
	strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S", localtime(&timep));
	return tmp;
}

void Finish()
{
	situation = 1;
}

int SelectMode(string mode, int num, string name) {
	if (mode == "加法模式" || mode == "1") {
		system("title 加法模式");
		system("cls");
		cout << "                                                     算数训练器 " << endl;
		cout << endl << "用户名：" << name << endl << endl;
		cout << "*参数设定：" << endl;
		cout << "1.题目数： " << num << endl;
		cout << "2.模式设定： " << "加法模式" << endl;
		return 1;
	}
	else if (mode == "减法模式" || mode == "2") {
		system("title 减法模式");
		system("cls");
		cout << "                                                     算数训练器 " << endl;
		cout << endl << "用户名：" << name << endl << endl;
		cout << "*参数设定：" << endl;
		cout << "1.题目数： " << num << endl;
		cout << "2.模式设定： " << "减法模式" << endl;
		return 2;
	}
	else if (mode == "乘法模式" || mode == "3") {
		system("title 乘法模式");
		system("cls");
		cout << "                                                     算数训练器 " << endl;
		cout << endl << "用户名：" << name << endl << endl;
		cout << "*参数设定：" << endl;
		cout << "1.题目数： " << num << endl;
		cout << "2.模式设定： " << "乘法模式" << endl;
		return 3;
	}
	else if (mode == "除法模式" || mode == "4") {
		system("title 除法模式");
		system("cls");
		cout << "                                                     算数训练器 " << endl;
		cout << endl << "用户名：" << name << endl << endl;
		cout << "*参数设定：" << endl;
		cout << "1.题目数： " << num << endl;
		cout << "2.模式设定： " << "除法模式" << endl;
		return 4;
	}
	else if (mode == "混合模式" || mode == "5") {
		system("title 混合模式");
		system("cls");
		cout << "                                                     算数训练器 " << endl;
		cout << endl << "用户名：" << name << endl << endl;
		cout << "*参数设定：" << endl;
		cout << "1.题目数： " << num << endl;
		cout << "2.模式设定： " << "混合模式" << endl;
		return 5;
	}
	else {
		system("cls");
		cout << "                                                     算数训练器 " << endl;
		cout << endl << "用户名：" << name << endl << endl;
		cout << "*参数设定：" << endl;
		cout << "1.题目数： " << num << endl;
		cout << "2.模式设定： " << endl << endl;
		printf("\t\t  模式选择方法：\n");
		printf("\t\t （1）加法模式 --全部是加法运算\n");
		printf("\t\t （2）减法模式 --全部是减法运算\n");
		printf("\t\t （3）乘法模式 --全部是乘法运算\n");
		printf("\t\t （4）除法模式 --全部是除法运算\n");
		printf("\t\t （5）混合模式 --加减混合运算，适合有能力的人训练\n");
		printf("\t\t 请在模式选择时输入以上 文字 或 数字序号 !\n\n");
		cout << "模式错误，请重新输入: ";
		return -1;
	}
}

string outputmode(string inputmode)
{
	if (inputmode == "加法模式" || inputmode == "1") return "加法模式";
	else if (inputmode == "减法模式" || inputmode == "2") return "减法模式";
	else if (inputmode == "乘法模式" || inputmode == "3") return "乘法模式";
	else if (inputmode == "除法模式" || inputmode == "4") return "除法模式";
	else if (inputmode == "混合模式" || inputmode == "5") return "混合模式";
}

string outputcomp(string inputcomp)
{
	if (inputcomp == "易" || inputcomp == "1") return "易";
	else if (inputcomp == "中" || inputcomp == "2") return "中";
	else if (inputcomp == "难" || inputcomp == "3") return "难";
}

int SelectComplex(string mode, string complex, int num, string name) {
	if (complex == "易" || complex == "1")
		return 1;
	else if (complex == "中" || complex == "2")
		return 2;
	else if (complex == "难" || complex == "3")
		return 3;
	else {
		system("cls");
		cout << "                                                     算数训练器 " << endl;
		cout << endl << "用户名：" << name << endl << endl;
		cout << "*参数设定：" << endl;
		cout << "1.题目数： " << num << endl;
		cout << "2.模式设定： " << outputmode(mode) << endl;
		cout << "3.难度设定：" << endl << endl;
		printf("\t\t （1）易 --适合初学者使用\n");
		printf("\t\t （2）中 --适合比较熟练的学者使用\n");
		printf("\t\t （3）难 --适合高能力学者使用\n");
		printf("\t\t 请在模式选择时输入以上 文字 或 数字序号 !\n\n");
		cout << "难度设置错误，请重新输入: ";
		return -1;
	}
}

void LimitTime(string name)
{
	string lt, command = "start 附属-计时器.exe";
	system("cls");
	cout << "                                                     算数训练器 " << endl;
	if (MessageBox(NULL, TEXT("是否要限时挑战？"), TEXT("参数设定"), MB_YESNO + 32) == 6) {
		cout << "请输入限时时间（分钟）：";
		cin >> lt;
		command += " daojishi ";
		command += lt;
		// 检查错误所用 cout << "此时的命令行：" << endl << command << endl;
		cout << "时间设定中";
		for (int gn = 0; gn < 6; gn++)
		{
			cout << ".";
			Sleep(1000);
		}
		cout << endl << "时间设定成功!";
		Sleep(1000);
		const char* cmd = command.data();
		// 检查错误所用 cout << "此时的命令行：" << endl << cmd << endl;
		system(cmd);
	}
	else {
		command += " jishi 0";
		const char* cmd = command.data();
		system(cmd);
	}

}


int CalcComp(int in, int comp) {
	if (comp == 1)
		return in / 100;
	else if (comp == 2)
		return in / 10;
	else if (comp == 3)
		return in;
}

char ReadText(string file)
{
	ifstream infile;
	infile.open(file.data());
	assert(infile.is_open());
	char c;
	infile >> c;
	infile.close();
	return c;
}

void MaxScreen() {
	HWND Hwnd = GetForegroundWindow();
	ShowWindow(Hwnd, SW_MAXIMIZE);
}

void CurrentColor(char COLOR)
{
	if (COLOR == I) system("color 07"); //黑底白字
	if (COLOR == J) system("color 0a"); //黑底绿字
	if (COLOR == K) system("color 03"); //黑底蓝字
	if (COLOR == L) system("color f0"); //白底黑字
	if (COLOR == M) system("color fc"); //白底红字
	if (COLOR == N) system("color f1"); //白底蓝字
	if (COLOR == O) system("color f4"); //白底暗红
	if (COLOR == P) system("color f2"); //白底绿字
	if (COLOR == Q) system("color f3"); //白底亮蓝
	if (COLOR == R) system("color fd"); //白底紫字
}

void Setup() {
	score = 0;
	situation = 0;
	system("title 算数训练器   ---屈圣桥");

	char SOUNDNAME;
	char FULLSCREEN;
	char COLOR;
	COLOR = ReadText("Color.ini");
	SOUNDNAME = ReadText("SoundSelect.ini");
	FULLSCREEN = ReadText("Screen.ini");

	CurrentColor(COLOR);
	if (FULLSCREEN == YES) MaxScreen();
	else system("mode con:cols=180 lines=50");

	if (SOUNDNAME == A) PlaySound(1);
	else if (SOUNDNAME == B) PlaySound(2);
	else if (SOUNDNAME == C) PlaySound(3);
	else if (SOUNDNAME == D) PlaySound(4);
	else if (SOUNDNAME == E) PlaySound(5);
	else if (SOUNDNAME == F) PlaySound(6);
	else if (SOUNDNAME == G) PlaySound(7);
	else if (SOUNDNAME == H) PlaySound(8);
	else StopPlaySound();
}

int main() {
	int yesorno = 0;
	Setup();
	string timenow = getTime();
	Instruction();
	int num, mod, comp;
	string mode, complex, name, file;
	cout << "                                                     算数训练器 " << endl;
	cout << "请输入您的姓名：";
	cin >> name;
	cout << name << ", 您好。欢迎使用算数训练器！" << endl;
	system("cls");
	cout << "                                                     算数训练器 " << endl;
	cout << endl << "用户名：" << name << endl << endl;
	cout << "*参数设定：" << endl;
	cout << "1.请输入题目数量: ";
	cin >> num;
	system("cls");
	cout << "                                                     算数训练器 " << endl;
	cout << endl << "用户名：" << name << endl << endl;
	cout << "*参数设定：" << endl;
	cout << "1.题目数量: " << num << endl;
	cout << "2.模式设定: " << endl << endl;
	printf("\t\t  模式选择：\n");
	printf("\t\t （1）加法模式 --全部是加法运算\n");
	printf("\t\t （2）减法模式 --全部是减法运算\n");
	printf("\t\t （3）乘法模式 --全部是乘法运算\n");
	printf("\t\t （4）除法模式 --全部是除法运算\n");
	printf("\t\t （5）混合模式 --加减混合运算，适合有能力的人训练\n");
	printf("\t\t 请在模式选择时输入以上 文字 或 数字序号!\n\n");
	cout << "请输入运算模式: ";
	for (;;) {
		cin >> mode;
		mod = SelectMode(mode, num, name);
		if (mod != -1) break;
	}


	system("cls");
	cout << "                                                     算数训练器 " << endl;
	cout << endl << "用户名：" << name << endl << endl;
	cout << "*参数设定：" << endl;
	cout << "1.题目数量: " << num << endl;
	cout << "2.模式设定: " << outputmode(mode) << endl;
	cout << "3.难度设定:" << endl;
	cout << "\t\t难度设置：" << endl;
	printf("\t\t （1）易 --适合初学者使用\n");
	printf("\t\t （2）中 --适合比较熟练的学者使用\n");
	printf("\t\t （3）难 --适合高能力学者使用\n");
	printf("\t\t 请在模式选择时输入以上 文字 或 数字序号 !\n\n");

	cout << "你选择的难度是：";
	for (;;) {
		cin >> complex;
		comp = SelectComplex(mode, complex, num, name);
		if (comp != -1) break;
	}

	LimitTime(name);

	system("cls");
	cout << "                                                     算数训练器 " << endl;
	Sleep(2000);
	cout << "正在准备题目" << endl;
	for (int g = 0; g <= 10; g++)
	{
		Sleep(1000);
		cout << ".";
	}
	Sleep(1000);
	cout << "." << endl;
	Sleep(2000);
	cout << "即将开始练习";
	Sleep(2000);

	system("cls");
	cout << "                                                     算数训练器 " << endl;
	cout << endl;
	cout << endl << "用户名：" << name << endl << endl;
	cout << "*参数设定：" << endl;
	cout << "  1.题目数： " << num << endl;
	cout << "  2.模式设定： " << outputmode(mode) << endl;
	cout << "  3.难度设定：" << outputcomp(complex) << endl << endl;
	cout << "*开始训练时间：" << timenow << endl;
	cout << "--------------------------------------训练开始--------------------------------------" << endl << endl;



	ofstream fout("复习题库.txt", ofstream::app);
	fout << endl << endl << "用户名：" << name << "    " << "开始时间：" << timenow << "    " << "    " << "题目个数：" << num << "    " << "模式：" << outputmode(mode) << "    " << "难度：" << outputcomp(complex) << "    " << "状态：正常" << endl;

	switch (mod) {

	case 1:
		for (int t = 1; t <= num; t++) {
			int a, b, c, m, n, input;
			srand((unsigned)time(NULL) + (reset * t));
			a = rand();
			b = rand();
			m = CalcComp(a, comp);
			n = CalcComp(b, comp);
			c = m + n;
			cout << "第" << t << "题: ";
			cout << m << " + " << n << " = ";
			cin >> input;
			Judge(input, c);

			fout << "      第" << t << "题: ";
			fout << m << " + " << n << " = ";
			if (input == c) yesorno = 1;
			else yesorno = 0;
			fout << "           " << "正确答案: " << c << "      " << "你的答案：" << input;
			if (yesorno == 1) fout << "      回答正确    得分 + 10" << endl;
			else fout << "      回答错误    得分 - 10" << endl;
		}
		Finish();
		fout.clear();
		fout.close();

		break;

	case 2:
		for (int t = 1; t <= num; t++) {
			int a, b, c, m, n, input;
			srand((unsigned)time(NULL) + (reset * t));
			a = rand();
			b = rand();
			m = CalcComp(a, comp);
			n = CalcComp(b, comp);
			c = m - n;
			cout << "第" << t << "题: ";
			cout << m << " - " << n << " = ";
			cin >> input;
			Judge(input, c);

			fout << "      第" << t << "题: ";
			fout << m << " - " << n << " = ";
			if (input == c) yesorno = 1;
			else yesorno = 0;
			fout << "           " << "正确答案: " << c << "      " << "你的答案：" << input;
			if (yesorno == 1) fout << "      回答正确    得分 + 10" << endl;
			else fout << "      回答错误    得分 - 10" << endl;

		}
		Finish();
		fout.clear();
		fout.close();
		break;

	case 3:
		for (int t = 1; t <= num; t++) {
			int a, b, c, m, n, input;
			srand((unsigned)time(NULL) + (reset * t));
			a = rand();
			b = rand();
			m = CalcComp(a, comp);
			n = CalcComp(b, comp);
			c = m * n;
			cout << "第" << t << "题: ";
			cout << m << " x " << n << " = ";
			cin >> input;
			Judge(input, c);
			fout << "      第" << t << "题: ";
			fout << m << " x " << n << " = ";
			if (input == c) yesorno = 1;
			else yesorno = 0;
			fout << "           " << "正确答案: " << c << "      " << "你的答案：" << input;
			if (yesorno == 1) fout << "      回答正确    得分 + 10" << endl;
			else fout << "      回答错误    得分 - 10" << endl;
		}
		Finish();
		fout.clear();
		fout.close();
		break;

	case 4:
		cout << "结果取整数!" << endl;
		for (int t = 1; t <= num; t++) {
			int a, b, c, m, n, input;
			srand((unsigned)time(NULL) + (reset * t));
			a = rand();
			b = rand();
			m = CalcComp(a, comp);
			n = CalcComp(b, comp);
			c = m / n;
			cout << "第" << t << "题: ";
			cout << m << " ÷ " << n << " = ";
			cin >> input;
			Judge(input, c);

			fout << "      第" << t << "题: ";
			fout << m << " ÷ " << n << " = ";
			if (input == c) yesorno = 1;
			else yesorno = 0;
			fout << "           " << "正确答案: " << c << "      " << "你的答案：" << input;
			if (yesorno == 1) fout << "      回答正确    得分 + 10" << endl;
			else fout << "      回答错误    得分 - 10" << endl;
		}
		Finish();
		fout.clear();
fout.close();
break;

	case 5:
		srand((unsigned)time(NULL) + (reset));
		int numnum;
		int input, ans = 0, tmp, signlable;
		for (int t = 1; t <= num; t++) {
			ans = 0;
			numnum = (rand() % (max - min + 1)) + min;
			cout << "第" << t << "题: ";
			fout << "      第" << t << "题: ";
			for (int s = 1; s <= numnum; s++) {
				srand((unsigned)time(NULL) + (reset * t * s));
				signlable = (rand() % 2 + 1);
				tmp = CalcComp(rand(), comp);
				if (signlable == 1) {
					{
						if (s == 1);
						else {
							cout << " + ";
							fout << " + ";
						}
						ans += tmp;

					}
				}
				else {
					cout << " - ";
					fout << " - ";
					ans -= tmp;
				}
				cout << tmp;
				fout << tmp;

			}
			cout << " = ";
			fout << " = ";
			cin >> input;
			Judge(input, ans);

			if (input == ans) yesorno = 1;
			else yesorno = 0;
			fout << "           " << "正确答案: " << ans << "      " << "你的答案：" << input;
			if (yesorno == 1) fout << "      回答正确    得分 + 10" << endl;
			else fout << "      回答错误    得分 - 10" << endl;
		}
		Finish();
		fout.clear();
		fout.close();
		break;
	}
	string timeend = getTime();
	if (situation == 1)
	{
		Sleep(5000);
		system("cls");
		cout << "祝贺！您已成功完成训练！" << endl;
		Sleep(2000);
		cout << "正在输出结果";
		for (int t = 5; t > 0; t--)
		{
			cout << ".";
			Sleep(500);
		}
		cout << endl;
		ofstream file("统计数据.txt", ofstream::app);
		file << endl << "用户名：" << name << "    " << "开始时间：" << timenow << "    " << "结束时间：" << timeend << "    " << "题目个数：" << num << "    " << "模式：" << outputmode(mode) << "    " << "难度：" << outputcomp(complex) << "    " << "得分：" << score << "    " << "状态：正常" << endl;
		Sleep(2000);
		file.close();
		file.clear();
		system("start 统计数据.txt");
		exit(0);

	}
	else {
		cout << "很遗憾。由于未知的问题，这次的训练未完成" << endl;
		cout << "期待你下次努力！！加油！！" << endl;
		cout << "正在输出结果";
		for (int t = 5; t > 0; t--)
		{
			cout << ".";
			Sleep(500);
		}
		cout << endl;
		ofstream file("统计数据.txt", ofstream::app);
		file << endl << "开始时间：" << timenow << "    " << "状态：非正常" << endl;
		Sleep(2000);
		Sleep(2000);
		file.close();
		file.clear();
		system("pause");
		system("start 统计数据.txt");
		exit(0);
	}
}

}

//Part 3 计时器
void Part 3 计时器{
//使用之前要记得传参 1.模式（jishi/daojishi）2.时间（字符串，单位为分钟）

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<iostream>
#include<cstdio>
#include <mmsystem.h>

#pragma comment (lib,"winmm.lib")

using namespace std;

void TopWindow(HWND& hWnd) {
	SetWindowPos(hWnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
}

void PlaySound()
{
	PlaySound(TEXT("ring.wav"), NULL, SND_FILENAME | SND_ASYNC);
}

int main(int argc, char** argv) {

	HWND hWnd = GetForegroundWindow();

	TopWindow(hWnd);


	system("title 计时器");
	system("mode con:cols=18 lines=7");

	string mode = argv[1];
	string StringTime = argv[2];

	int time = atoi(StringTime.c_str());
	time *= 60;
	int s = 0;

	printf("  可定时计时器\n");
	printf("--配 算数训练器\n");
	printf("版权所有--屈圣桥\n");
	printf("    -- 2020.9.17\n");
	cout << "启动中";
	for (int h = 0; h <= 2; h++)
	{
		cout << ".";
		Sleep(500);
	}
	Sleep(17000);
	if (mode == "jishi") {
		system("cls");
		system("mode con:cols=37 lines=1");
		system("title 计时模式");
		system("mode con:cols=25 lines=2");
		system("cls");
		for (;;) {
			TopWindow(hWnd);
			printf("已用时 %d 秒\n", s);
			s += 1;
			printf("加油！");
			Sleep(1000);
			system("cls");
		}
		system("pause");
		exit(0);
	}
	else if (mode == "daojishi") {
		system("cls");
		system("title 倒计时模式");
		system("mode con:cols=45 lines=1");
		system("cls");
		system("mode con:cols=30 lines=2");
		for (int s = time; s >= 0; s--) {
			TopWindow(hWnd);
			printf("定时 %d 秒\n", time);
			printf("还剩 %d 秒", s);
			Sleep(1000);
			system("cls");
		}
		printf("\t时间到!!\n");
		PlaySound();
		system("pause");
		exit(0);
	}
}
}

/*
          版权所有:屈圣桥   ----2022.2.16
*/
