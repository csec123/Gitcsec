#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

int main(void){

	/*string job;
	cout<<"������ʲô������"<<endl;//cout��console output��д  ��˼�ǿ���̨���

	//�����û�����C++ ����Ա���������ֻ���ȡC++����Ϊ������Ա��ǰ���пո�
	cin>>job;//�ӵ�һ���ǿհ��ַ�(�հ��ַ��ǣ��س������ո��Ʊ��)��ʼ���������ĵ�һ���հ��ַ�Ϊֹ����C���Ե�scanf����

	cout<<"��"<<job<<"������һ��ܲ����?"<<endl;
	*/

	//�����������ַ����������ַ����ĸ�����ȷ����ֱ�����������ctrl+z���س�����
	//��Ҫʹ��ѭ�����
	string food;
	int count=0;

	cout<<"����ϲ���Ե�ʳ����"<<endl;

	//ʹ��ѭ�����ʱ��cin>>��������  ��������ļ���������ctrl+z�����ͷ���ֵ0
	//while����������ű�ʾ���������Ϊ�棬����while��������
	while(cin>>food){
	count=count+1;
	cout<<"��"<<"��"<<count<<"ϲ����ʳ���ǣ�"<<food<<endl;

	}
	
	cout<<"��ϲ������ʳ��"<<count<<"��"<<endl;
	
	system("pause");
	return 0;



}