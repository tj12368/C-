//===========================
//��������仯 Dif CP 
//===========================
#include<iostream>
using namespace std;
//---------------------------
int main(){
	for(int n; cin>>n; ){
		int sum=0, b=0;  //bΪ�����ۼ�ֵ����0֮�� 
		for(int a; n-- && cin>>a; ){
			b = (b>0?b:0) + a;
			if(b>sum) sum=b;
	  }
		cout<<sum<<"\n";
	}
}//--------------------------
