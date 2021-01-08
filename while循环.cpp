/*#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

int main(void){
	string word; //定义一个字符串变量
	int count=0;//定义一个整数,统计单词个数
	int length=0;//定义一个整数,统计单词长度
	
	cout<<"请输入任意多个单词"<<endl;

	while(1){    //(1)表示"真"    但遇到"EFO"文件结束符时,返回值为0(NULL)

		if((cin>>word)==0){  //加括号表示cin>>word是一个整体
			break;//跳出循环,运行while循环外的程序
		}
	
		count++;//count++等效于count=count+1
		length+=word.length();//等效于length=word+length       a+=1000等于a=a+1000

		


	}
		cout<<"总共输入了"<<count<<"个单词"<<endl;

		cout<<"单词的总长度是:"<<length<<endl;

	system("pause");

	return 0;

}
*/



//c语言写法

#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(void){
	char word[128];
	int count=0;
	int length=0;

	printf("请输入任意多个单词\n");
	while(1){
		if(scanf("%s",word)==-1){  //遇到文件结束符(eof)  返回值是-1
		break;
		
		}
	count++;
	length+=strlen(word);//

	
	}
	printf("共输入%d个单词\n",count);
	printf("单词的长度是%d\n",length);

	system("pause");
	return 0;





}
