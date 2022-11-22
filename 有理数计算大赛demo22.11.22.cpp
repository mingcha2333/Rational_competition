/*
22.11.22更新:
添加了减法和乘法的随机
增加了序号
优化了程序算法 
源文件总大小：1012字节 
程序总大小：1.3MB 
作者：mingcha2333/gouren 
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
			if(simble==1){ //加法 
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
			if(simble==2){ //减法 
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
			if(simble==3){ //乘法 
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
		cout << "终于，你来到了这里..." << endl;
		cout << "你成功的通过了简单模式-DEMO！" << endl ;
	return 0;
}
