/*
22.11.22����:
����˼����ͳ˷������
���������
�Ż��˳����㷨 
Դ�ļ��ܴ�С��1012�ֽ� 
�����ܴ�С��1.3MB 
���ߣ�mingcha2333/gouren 
*/ 

#include <bits/stdc++.h>
using namespace std;
int main() {
	int a=0,b=0,da=0,simble=0;
	long sum=0;
	srand(time(0));
		for(int i=1;i<=5;i++){
			sum=0;
			a=rand();
			b=rand();
			simble = 1 + rand() % 3;
			if(simble==1){ //�ӷ� 
				sum=a+b;
				cout<<"#"<<i<<" "<<a<<"+"<<b<<"=?";
				cin>>da;
				if(da==sum){
					cout<<"yes"<<endl;
				}else{
					cout<<"no";
					return 0;
				}
			}
			if(simble==2){ //���� 
				sum=a-b;
				cout<<"#"<<i<<" "<<a<<"-"<<b<<"=?";
				cin>>da;
				if(da==sum){
					cout<<"yes"<<endl;
				}else{
					cout<<"no";
					return 0;
				}
			}
			if(simble==3){ //�˷� 
				sum=a*b;
				cout<<"#"<<i<<" "<<a<<"*"<<b<<"=?";
				cin>>da;
				if(da==sum){
					cout<<"yes"<<endl;
				}else{
					cout<<"no";
					return 0;
				}
			}
			
		}
		cout << "���ڣ�������������..." << endl;
		cout << "��ɹ���ͨ���˼�ģʽ-DEMO��" << endl ;
	return 0;
}
