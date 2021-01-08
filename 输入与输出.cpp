#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

int main(void){

	/*string job;
	cout<<"你是做什么工作的"<<endl;//cout是console output简写  意思是控制台输出

	//假设用户输入C++ 程序员，则编译器只会读取C++，因为“程序员”前面有空格
	cin>>job;//从第一个非空白字符(空白字符是：回车符，空格，制表符)开始，到遇到的第一个空白字符为止，与C语言的scanf类似

	cout<<"做"<<job<<"，收入一点很不错吧?"<<endl;
	*/

	//连续输入多个字符串，而且字符串的个数不确定，直到输入结束（ctrl+z并回车）；
	//需要使用循环语句
	string food;
	int count=0;

	cout<<"你最喜欢吃的食物是"<<endl;

	//使用循环语句时：cin>>输入条件  如果遇到文件结束符（ctrl+z），就返回值0
	//while语句后面的括号表示条件，如果为真，运行while语句的内容
	while(cin>>food){
	count=count+1;
	cout<<"你"<<"第"<<count<<"喜欢的食物是："<<food<<endl;

	}
	
	cout<<"你喜欢的美食有"<<count<<"种"<<endl;
	
	system("pause");
	return 0;



}