#include<iostream>
#include<string>
//#include<fstream>
#include<vector>
#include<cctype>
#include<algorithm>
#include<cstddef>
using namespace std;
#define MAX 100000
int caseNum;
int counter[MAX];						//全局变量自动初始化为0
bool duplicate=false;

vector<string> processedNumber;

char map(char c){						//字母的映射函数

	char tmp;
	switch(c){
		case 'A':
		case 'B':
		case 'C':tmp=48+2;break;
		case 'D':
		case 'E':
		case 'F':tmp=48+3;break;
		case 'G':
		case 'H':
		case 'I':tmp=48+4;break;
		case 'J':
		case 'K':
		case 'L':tmp=48+5;break;
		case 'M':
		case 'N':
		case 'O':tmp=48+6;break;
		case 'P':
		case 'R':
		case 'S':tmp=48+7;break;
		case 'T':
		case 'U':
		case 'V':tmp=48+8;break;
		case 'W':
		case 'X':
		case 'Y':tmp=48+9;break;

	}
	return tmp;
}


string strip(string num){			//去除字符串中的'-'

	string tmp(8,'0');	
	int j=0;
	for(size_t i=0; i<num.length(); i++){
		if( num[i]=='-')
			continue;
		else
			tmp[j++]=num[i];
	}
	return tmp;

}
void process(string num){			//对号码中的大写字母进行映射处理
	
	num=strip(num);					//处理前的电话号码不一定是7位的

	for(int i=0;i<7;i++){			//电话号码固定为7位

		if( isdigit(num[i]))
			continue;
		if(isalpha(num[i]))
			num[i]=map(num[i]);

	}

	for(int j=6;j>=3;j--)			//把号码转化为标准形式
		num[j+1]=num[j];
	num[3]='-';
	processedNumber.push_back(num);
	
	
}

int main(){

	//ifstream in("test.txt");
	//in>>caseNum;
	cin>>caseNum;
	string phoneNumber;

	for(int i=0; i<caseNum; i++){
		//in>>phoneNumber;
		cin>>phoneNumber;
		process(phoneNumber);
	}

	sort(processedNumber.begin(),processedNumber.end());
	//copy(processedNumber.begin(),processedNumber.end(),ostream_iterator<string>(cout, "\n"));

	string tmp=processedNumber[0];
	int k=0;
	memset(counter,0,sizeof(counter));						//对应的号码至少出现一次
	for(size_t i=1; i<processedNumber.size() ;i++){

		if( tmp == processedNumber[i]){						//只要出现相等的情况，就一定存在重复的电话号码
			counter[k]++;
			duplicate=true;
		}
		else{

			tmp= processedNumber[i];
			k++;
		}
	}
	if(!duplicate){
		cout<<"No duplicates."<<endl;
		return 0;
	}
	vector<string>::iterator it=unique(processedNumber.begin(),processedNumber.end());
	k=0;
	for(vector<string>::iterator it1=processedNumber.begin() ; it1!=it ; it1++,k++){

		if(counter[k]==0)
			continue;
		cout<<(*it1)<<" "<<counter[k]+1<<endl;
	}


}
