/*#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

int main(void){
	string word; //����һ���ַ�������
	int count=0;//����һ������,ͳ�Ƶ��ʸ���
	int length=0;//����һ������,ͳ�Ƶ��ʳ���
	
	cout<<"����������������"<<endl;

	while(1){    //(1)��ʾ"��"    ������"EFO"�ļ�������ʱ,����ֵΪ0(NULL)

		if((cin>>word)==0){  //�����ű�ʾcin>>word��һ������
			break;//����ѭ��,����whileѭ����ĳ���
		}
	
		count++;//count++��Ч��count=count+1
		length+=word.length();//��Ч��length=word+length       a+=1000����a=a+1000

		


	}
		cout<<"�ܹ�������"<<count<<"������"<<endl;

		cout<<"���ʵ��ܳ�����:"<<length<<endl;

	system("pause");

	return 0;

}
*/



//c����д��

#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(void){
	char word[128];
	int count=0;
	int length=0;

	printf("����������������\n");
	while(1){
		if(scanf("%s",word)==-1){  //�����ļ�������(eof)  ����ֵ��-1
		break;
		
		}
	count++;
	length+=strlen(word);//

	
	}
	printf("������%d������\n",count);
	printf("���ʵĳ�����%d\n",length);

	system("pause");
	return 0;





}
