#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;
//������ݣ��·ݣ�Ȼ����ʾ���걾���ж�����
//������Ա�4����
int main(void){
	bool flag;
	int year=0;//��
	int mouth=0;//��
	int days=0;
	cout<<"���������"<<endl;
	cin>>year;
	cout<<"�������·�"<<endl;
	cin>>mouth;
	if(year%4==0){
		flag=true;
	
	}else{
		flag=false;
	}
	switch(mouth){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days=31;
	break;
	case 4:
	case 6:
	case 9:
	case 11:
		days=30;
	break;
	case 2:
		days=flag?29:28;
	break;
	default:
	break;
}
	cout<<year<<"��"<<mouth<<"����"<<days<<"��"<<endl;

system("pause");
return 0;
}