#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;
//输入年份，月份，然后显示该年本月有多少天
//润年可以被4整除
int main(void){
	bool flag;
	int year=0;//年
	int mouth=0;//月
	int days=0;
	cout<<"请输入年份"<<endl;
	cin>>year;
	cout<<"请输入月份"<<endl;
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
	cout<<year<<"年"<<mouth<<"月有"<<days<<"天"<<endl;

system("pause");
return 0;
}