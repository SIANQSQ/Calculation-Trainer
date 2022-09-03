算数训练器代码库----2022.2
此文档是算数训练器的使用说明
1.此程序基于Visual C++开发，运行时需要一些*.dll动态链接库，如果您的电脑无法运行，请注册本目录dll文件夹中的运行库文件
2.请读本目录的使用说明！
3.启动本程序的时候，您既可以运行上一个目录里的“启动.exe",也可以运行本目录的“双击这个也能启动.bat”。
   

           ----屈圣桥 2022.2.16
欢迎使用算数训练器                初次使用一定要仔细阅读本介绍文档

制作者---屈圣桥  2022.2.10

功能：
 ①可以自由设定模式及参数，来提高计算能力
 ②支持难度，模式设定，支持加减混和运算
 ③支持计时功能
 ④支持数据记录，复习错题
 ⑤支持用户自定义背景颜色，背景音乐，全屏启动

使用方法：
1.输入题目数量（大于等于 1 的正整数)
2.选择模式：
 （1）加法模式 --全部是加法运算
 （2）减法模式 --全部是减法运算
 （3）乘法模式 --全部是乘法运算
 （4）除法模式 --全部是除法运算
 （5）混合模式 --加减混合运算，适合有能力的人训练
 请在模式选择时输入以上文字或数字序号!
3.选择难度
（1）易 --适合初学者使用
（2）中 --适合比较熟练的学者使用
（3）难 --适合高能力学者使用
请在难度选择时输入以上文字或数字序号
4.计分系统
 答对一道题可得 10 分
 答错一道题会扣 10 分
5.计时系统
配备的计时器模块可在主程序内被调用，有计时和倒计时两种模式，在主程序中可自行选择
6.结果输出
 在“统计数据.txt”中，你可以看到所有你之前进行的练习结果。包括用户名，练习信息（题目数，模式，难度），时间（起，止），得分
7.复习错题
 在“复习题库.txt”中，你可以看到所有你之前的练习题目（包括题目，你的答案和正确答案）。
8.用户自定义背景颜色，背景音乐方法
①背景颜色和音乐更改方法：在启动程序中，输入6，进入设置，之后即可更改相关设置
②背景音乐自定义方法：把你要自定义的音频文件命名为“自定义音乐1.wav”或“自定义音乐2.wav”或“自定义音乐3.wav”
   注意：最多支持3个自定义音乐 ！！音频格式必须是*.wav 否则无法播放，MP3转wav的工具可在网络上查找
   
作品名称：算数训练器
作者：屈圣桥 
单位：抚顺二中   高一 一班
制作目的：参加第37届辽宁省科技创新大赛
							----2022.2.16

本文档目录：
一、项目附件
二、研究论文
三、源代码




一、项目附件：
1. 启动.exe                                              --启动点击它
2. 算数训练器.exe                                    --主程序
3. 附属-计时器.exe                                   --计时工具
4. 使用说明.txt                                         --使用说明
5. 复习题库.txt 			--复习题库：记录了所有用户曾经练习过的题目
6. 统计数据.txt			--统计数据：记录了所有用户的练习数据
7. 作者信息.txt                             	--本文档：记录所有数据信息
8. Screen.ini           
9. SoundSelect.ini
10. Volume.ini
11. Color.ini			--以上四个文件是程序的配置信息
12. 01雪之梦.wav
13. 02眼泪.wav
14. 03秋日私语.wav
15. 04梦中的婚礼.wav
16. 05安妮的仙境.wav		--以上五个文件是背景音乐
17. Open.wav			--开场引用
18. ring.wav			--提醒铃声
19.源代码.cpp			--源代码

二、项目论文

  第37届辽宁省青少年科技创新大赛

项目研究报告


项目名称：算数训练器

申 报 者：屈圣桥                        

所在学校（全称）：抚顺市第二中学         

辅导教师： 张德维  张金勇         

辅导机构（全称）：抚顺市第二中学         
 
目录
算数训练器	2
摘要:	2
关键词:	2
前言：	2
设计思路：	2
主要应用的函数命令及算法及创新设计：	3
实施方案：	8
1、系统流程图：	8
2、编程：	9
创新成果：	42
创新过程反思：	44
鸣谢：	45
参考文献：	45


算数训练器
抚顺市第二中学 屈圣桥

摘要: 
我研究发明的算数训练器是基于C++和Windows操作系统的程序设计项目,主要由启动程序,主程序和计时器程序三部分组成。目的是为了解决由于疫情,学生们在家缺乏在数学运算方面的练习,通过该程序可以帮助需要算数练习的学生进行算术练习来提高数学计算能力。该发明的程序代码由28个子函数和3个主函数构成,实现了随机出题,题目模式调整,难度设置,背景颜色及音乐等UI,用户答案正误判断,用户及练习信息记录,复习错题等功能。

关键词:算数训练器   C++  程序设计 随机出题 正误判断 错题复习 结果记录  UI体验

前言：
    最近疫情发生,很多学校不能正常开学,学生们的正常学习受到影响。然而数学这门学科非常的重要,提高算术能力对于学好数学是至关重要的。于是我研究了一款能够调整难度以及计算模式的随机出算术题题并检验用户答案是否正确的程序。 
确定了研究方向之后，进行了线下调查和网上检索。只在网上发现了几款能随机出简单算数题目并检验正误的功能,却不能出加减混合运算,也不能把错题以及练习记录输出,便于再次巩固复习,也不能实现计分功能。而且程序的美观程度和使用体验并不是很好,所以更坚定了我发明设计我的算数训练器的信心。
也基于此，我从2021年10月下旬开始了在科技活动中心的  算数训练器C++程序设计  研究性学习。
设计思路：
我的设计是基于C++.在启动程序中数字列出选项,根据用户输入执行相应的功能.在设置选项中,使用fstream基本库的命令对文本文档类文件进行读写,以达到控制主程序参数的目的.主程序中构建SelectComplex()函数, SelectMode()函数实现用户的自主难度选择和模式选择。采用rand()函数实现随机生成数字,在控制台输出的同时再输入到另外一个文本文档里实现出题记录,再用户给出答案的时候再把答案输出到文本文档里.最后再把答题正误情况也输出,就能进行复习了.此外我还设计了计分功能,在答题答对时加10分,答错扣10分,最后把得分也输出.构建ReadText()函数实现读取*.ini配置设置文件中的参数,PlaySound()函数和StopPlaySound()函数实现背景音乐的播放与停止,MaxScreen()函数实现全屏运行的控制,outputmode()和outputcomp()函数实现int类型到string类型的转换,getTime()函数实现获取当前时间,LimitTime()函数实现调用计时器进行计时,Instruction()函数进行使用介绍,Judge()函数判断答案是否正确,GetScore()和LoseScore()实现得分/失分,Position()函数实现控制台光标位置的移动来实现打印题目和分数的变换功能.在计时器里,有计时和倒计时两种模式,参数由主程序传入,其中TopWindow()函数实现始终浮在屏幕最前方,PlaySound()函数实现播放时间到的提醒铃声.

主要应用的函数命令及算法及创新设计：
一、启动部分
1.PlaySound() 播放声音     [1]引用自百度百科
PlaySound函数原型为 BOOL PlaySound(LPCSTR pszSound, HMODULE hmod,DWORD fdwSound) 
PlaySound参数，pszSound是指定了要播放声音的字符串，该参数可以是WAVE文件的名字，或是WAV资源的名字，或是内存中声音数据的指针，或是在系统注册表WIN.INI中定义的系统事件声音。如果该参数为NULL则停止正在播放的声音。
2. SetWindowPos() 使窗口浮在屏幕最前方    [1]引用自百度百科
SetWindowPos函数原型为BOOL WINAPI SetWindowPos(HWND hWnd,HWND hWndInsertAfter,int X,int Y,int cx, int cy, UINT uFlags);
SetWindowPos函数改变一个子窗口，弹出式窗口或顶层窗口的尺寸，位置和Z序。子窗口，弹出式窗口，及顶层窗口根据它们在屏幕上出现的顺序排序、顶层窗口设置的级别最高，并且被设置为Z序的第一个窗口。 
3.MessageBox()窗口提示[2]引用自CSDN技术社区
MessageBox(NULL, TEXT("main"), TEXT("title"), MB_YESNO)
MessageBox 函数用于创建、显示并操作一个消息对话框。该对话框包含由调用程序定义的信息和标题，以及预先定义的图标和按钮。 
4. fstream输出流
实现了向文本文档里读写数据
在打开输入/输出文件操作或者读入和/或输出数据后，输入和/或输出流的状态可以传到函数外部。
5.重载算法

char ReadText(string file)
{
	int pd;
	char chongzai;
	char msg[100];
	ifstream check(file.data());
	if (!check) {
		sprintf(msg, "出现了问题\n缺少配置文件  %s", file.c_str());
		pd = MessageBox(NULL, msg, TEXT("程序错误"), MB_ABORTRETRYIGNORE + 16);
		switch (pd)
		{
		case 3:
			exit(0);
		case 4:
			chongzai = ReadText(file);
			return chongzai;
		}
	}
	else {
		check.clear();
		check.close();
		ifstream infile;
		infile.open(file.data());
		assert(infile.is_open());
		char c;
		infile >> c;
		infile.close();
		return c;
	}
}

该函数实现了防止因缺少某配置设置(*.ini)文档造成程序不稳定.通过MessageBox()函数的返回值,如果是重试,则返回重载变量,知道用户选择了”忽略”或文件被重新写入,才继续执行程序.

6.设置界面
由于此部分代码过长,展示程序运行截图.

这部分实现了用户对于主程序的自由控制,可以决定启动音效的开关,背景音乐的开关,背景颜色的调节,运行时是否全屏等都可以在设置界面进行调节.实现的原理是把各个项的参数设定分别写入不同的ini配置设置文档里,然后保存,最后在运行主程序的时候由主程序一一读取ini配置设置,最后实现管理用户参数设定以及用户自定义练习环境的功能.这也是普通程序所不具备的UI(程序与用户交互)的功能,对于用户的良好体验至关重要.


二、主程序部分
1. Setup()初始化函数
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
该函数先将得分,状态赋值为0,之后调用ReadText函数读取配置信息,然后调用CurrentColor(),MaxScreen(),PlaySound()进行背景颜色,全屏显示,背景音乐的播放.
(参见一部分,启动程序)

2.重复直到得到正确的参数
 for (;;) {
		cin >> mode;
		mod = SelectMode(mode, num, name);
		if (mod != -1) break;
	}
这几行代码可以实现要求用户输入正确格式的目的,防止因变量类型不正确而造成程序异常.

3.随机出题+题目输出
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
						if (s==1)    ;
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
这是以混合模式(可以随机生成加减混合运算)为例的出题以及结果输出算法,其中num为题目数量,使用for循环num次,即完成了num次出题.
在控制台打印出题目的同时,也在定义的fstream中输出所有题目数据.实现了练习记录,用户交互同时进行.
①数据产生及输出方法:
使用rand()函数随机产生一个数据,由于一般产生的数据都是几万的五位数,于是我在难度的调节方面使用的是数据改变的方法.首先产生一个随机数,如果难度是困难,就输出这个数据,如果难度是中,那就把这个数除以十,输出剩下的数,如果难度是易,那就把这个数除以100,再输出.这样5位数就能变成4位,3位,达到降低难度的功能,从而实现难度选择的功能.之后把数据使用cout<<输出流输出到控制台,fout<<输出流输出到文档中来记录数据.
  ②题目产生算法
先确定题目长度,使用rand()函数随机生成一个数据,通过 (rand() % (max - min + 1)) + min;
其中max=10,为最长题目数,min=2,为最短题目数.则通过这个算法,产生的随机数值就再[2,10]区间内了.
再确定各个符号.同样产生随机数,因为产生的是自然数有奇数偶数之分,所以如果我设定奇数为+号,偶数为-号,
那么题目中出现+/-的概率是相同的,实现了随机出题.另外还需要调节题目的输出,比如+/-号的输出,+号在开头不能输出.所以我使用if条件判断,如果该符号是第一个产生的而且是+号,那么跳过输出语句,这样就实现了题目的正确输出.
③答案计算算法
  对于算数训练器,重要的不仅仅是随机产生题目,更需要检验答案是否正确.那么就需要计算出刚才产生的计算题目的答案,与用户的输入是否相符.我最初的设计是先产生一定量的数据,存入一个数组里,再产生不同的符号,之后再一点点计算答案,但此方法实在繁琐且不好操作,于是我又设计了另外一种算法,用C++结构体的思路,相当于产生一个带有符号性质的数.先定义一个ans为答案,赋值为0,再定义一个tmp变量作为临时存储变量,在输出的同时进行符号运算,比如产生的数据是-678,那么就执行0-678,得到-678,答案就计算完了,再重复之前随机产生的符号个数的次数,就把正确答案计算出来了.

以上就是主要创新点:练习记录的输出和随机出加减混合运算的核心实现部分.
4.正误判断+计分功能
void Judge(int input, int answer) {
	if (input == answer) {
		cout << "                                         对啦!  得十分!" << endl;
		GetScore();
	}
	else {
		cout << "                                          错啦!扣十分!" << endl;
		LoseScore();
	}
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);                               [2]
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

该函数的传参是用户输入答案和电脑算出的正确答案.比较答案是否正确的实现很简单,只要简单的判断语句就行.
计分功能:
由于是控制台应用,需要频繁调换光标位置实现分数的调整.首先在判断题目是否正确之后决定是加分还是扣分,之后使用HANDLE句柄控制,使用csbi得到当前光标的坐标,赋值到PosionX,PosionY,这样就记录了当前坐标的位置,目的是为了在输出完分数后再回到刚才的位置继续输出题目.为了实现坐标的跳到,用到了以下Position()函数.
void Position(int x, int y) {      [2]引用自CSDN技术社区
	COORD pos = { x,y };
	HANDLE Out = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(Out, pos);
}
这就实现了光标位置的跳转,跳转到坐标(100,0)打印得分,再回到初始位置,就实现了上述计分功能.

5.计时器功能
计时器对于督促使用者,提高算术效率也有至关重要的作用,在研究计时器程序与主程序之间的联系的过程中,我使用了跨程序传参,直接把参数传到计时器的main()主函数里,具体实现如下:

String command = "start 附属-计时器.exe"; 
command += " daojishi ";
command += lt;
这就通过字符串的拼接得到了一个完整的DOS命令,有由于system()函数只能接受const char*类型参数,所以我有用到了const char* cmd = command.data();[2] 命令,实现把字符串里的内容重定义成const char* 类型的字符常量.
之后再用system(cmd);命令实现计时器的调用,同时计时器端的main主函数定义为int main(int argc, char** argv),就可以读取跨程序传参的变量了.到此就解决了计时器的传参及使用的问题.

三、计时器模块
我使用的计时器模块是从我之前的自动关机程序的基础上进行修改的,主要增加了模式选择,包括计时和倒计时功能.由主程序的传参决定.这就实现了用户自主选择计时模式,促进用户提高练习效率.此外还增加了倒计时的铃声提醒,就像考试交卷一样.具体详见下面的代码部分.



实施方案：

1、系统流程图：

 
2、编程：
一、启动程序部分
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
	int pd;
	char chongzai;
	char msg[100];
	ifstream check(file.data());
	if (!check) {
		sprintf(msg, "出现了问题\n缺少配置文件  %s", file.c_str());
		pd = MessageBox(NULL, msg, TEXT("程序错误"), MB_ABORTRETRYIGNORE + 16);
		switch (pd)
		{
		case 3:
			exit(0);
		case 4:
			chongzai = ReadText(file);
			return chongzai;
		}
	}
	else {
		check.clear();
		check.close();
		ifstream infile;
		infile.open(file.data());
		assert(infile.is_open());
		char c;
		infile >> c;
		infile.close();
		return c;
	}
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
	cout << "主程序背景颜色已更改为:" ;
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

	int mode, setting, snd,clr;
	

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
	cout << "----屈圣桥 2022.1.26" << endl;
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
			else if (VOLUME == NO) cout << "              关" << endl;
			else cout << "未找到文件 Volume.ini" << endl;
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

		cout << "0.返回" << endl<<endl;
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
			cout << "请输入相应数字序号更改音乐"<<endl;
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

二、主程序部分
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
#include<tchar.h>
#include <stdarg.h>

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
	int pd;
	char chongzai;
	char msg[100];
	ifstream check(file.data());
	if (!check) {
		sprintf(msg, "出现了问题\n缺少配置文件  %s", file.c_str());
		pd=MessageBox(NULL, msg, TEXT("程序错误"), MB_ABORTRETRYIGNORE + 16);
		switch (pd)
		{
		case 3:
			exit(0);
		case 4:
			chongzai=ReadText(file);
			return chongzai;
		}
	}
	else {
		check.clear();
		check.close();
		ifstream infile;
		infile.open(file.data());
		assert(infile.is_open());
		char c;
		infile >> c;
		infile.close();
		return c;
	}
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
	if (COLOR == R) system("color 7d"); //白底紫字
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
	cout << "3.难度设定:"<<endl;
	cout << "\t\t难度设置："<<endl;
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
	fout << endl<<endl << "用户名：" << name << "    " << "开始时间：" << timenow << "    " << "    " << "题目个数：" << num << "    " << "模式：" << outputmode(mode) << "    " << "难度：" << outputcomp(complex) << "    "<< "状态：正常" << endl;

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
			if (yesorno == 1) fout << "      回答正确    得分 + 10"<<endl;
			else fout<< "      回答错误    得分 - 10"<<endl;
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
						if (s==1)    ;
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

三、计时器部分
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
创新成果：
我发明算数训练器经过多次调试验证，目前设计功能都已基本实现。

程序执行界面:
 
输出结果如下:
统计数据:
 
错题复习:
 

创新过程反思：
     1、跟传统的随机出题系统相比,我设计的程序不仅能够出简单的加减乘除题目,还支持出加减混合运算题目,支持用户自选模式和难度,同时还能把每次练习的题目输出,便于用户后期进行复习和反思,也能记录每次练习的数据,综合评判练习者的水平和能力.
2、由于学习和研究时间有限，半年中午研究性学习，知识量还太小。本想设计更好的UI界面和混合乘除法功能，但难度太大,算法设计会更加复杂，我的计算机水平还不够,下学期的学习我后继续努力。
3、由于Windows API命令太多而且我并不能很好地运用它们,在程序研究设计的过程中需要查阅一些资料.以后我还需要
4、在计时方面,我的程序只能做到输出起始时间,而不能计算从开始到结束一共用了多长时间,这是还需要提高优化的地方

鸣谢：
衷心感谢我们科技社团张德维老师！我校科技活动，学校申请多年，市财政都没给过任何资金支持。没有经费、没有材料、没有设计加工工具。没有一个创客教室，都是张老师一手把我校的科技活动领导起来.他为了领导我们学校的科技工作,辞掉原来的任职,专门研究科技以及特殊招生.张老师引导我,支持我,鼓励我参与科技创新大赛,才有今天我做出的项目以及研究成果.我们知道，张老师是一个多年来带学生获得过好多次全国、省市级奖项的老师，全国优秀教练、先进辅导员，还连续作过省级裁判长！他时刻教导我们要立志走技术强国之路，把我们的人生梦想和民族伟大复兴联系在一起。
衷心感谢我的班主任张金勇老师!张老师作为学校的领导兼班主任,从来没有因学校公事忙而疏忽对我们的关照.张老师十分认可我在计算机编程方面的能力,也鼓励我参加这些活动. 为了报答他们,我们要锻炼我们的自主学习与研究能力、快速学习与应用能力，牢固竖立创新变革意识，他说这是适应中国人才需求的大方向！无以为报，我们唯有刻苦学习，积极锻炼！早日成长为祖国需要的人才！

参考文献：
[1]百度百科
[2]CSDN技术社区



三、源代码

一、启动程序部分
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
	int pd;
	char chongzai;
	char msg[100];
	ifstream check(file.data());
	if (!check) {
		sprintf(msg, "出现了问题\n缺少配置文件  %s", file.c_str());
		pd = MessageBox(NULL, msg, TEXT("程序错误"), MB_ABORTRETRYIGNORE + 16);
		switch (pd)
		{
		case 3:
			exit(0);
		case 4:
			chongzai = ReadText(file);
			return chongzai;
		}
	}
	else {
		check.clear();
		check.close();
		ifstream infile;
		infile.open(file.data());
		assert(infile.is_open());
		char c;
		infile >> c;
		infile.close();
		return c;
	}
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
	cout << "主程序背景颜色已更改为:" ;
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

	int mode, setting, snd,clr;
	

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
	cout << "----屈圣桥 2022.1.26" << endl;
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
			else if (VOLUME == NO) cout << "              关" << endl;
			else cout << "未找到文件 Volume.ini" << endl;
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

		cout << "0.返回" << endl<<endl;
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
			cout << "请输入相应数字序号更改音乐"<<endl;
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

二、主程序部分
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
#include<tchar.h>
#include <stdarg.h>

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
	int pd;
	char chongzai;
	char msg[100];
	ifstream check(file.data());
	if (!check) {
		sprintf(msg, "出现了问题\n缺少配置文件  %s", file.c_str());
		pd=MessageBox(NULL, msg, TEXT("程序错误"), MB_ABORTRETRYIGNORE + 16);
		switch (pd)
		{
		case 3:
			exit(0);
		case 4:
			chongzai=ReadText(file);
			return chongzai;
		}
	}
	else {
		check.clear();
		check.close();
		ifstream infile;
		infile.open(file.data());
		assert(infile.is_open());
		char c;
		infile >> c;
		infile.close();
		return c;
	}
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
	if (COLOR == R) system("color 7d"); //白底紫字
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
	cout << "3.难度设定:"<<endl;
	cout << "\t\t难度设置："<<endl;
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
	fout << endl<<endl << "用户名：" << name << "    " << "开始时间：" << timenow << "    " << "    " << "题目个数：" << num << "    " << "模式：" << outputmode(mode) << "    " << "难度：" << outputcomp(complex) << "    "<< "状态：正常" << endl;

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
			if (yesorno == 1) fout << "      回答正确    得分 + 10"<<endl;
			else fout<< "      回答错误    得分 - 10"<<endl;
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
						if (s==1)    ;
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

三、计时器部分
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
