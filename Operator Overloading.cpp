#include<bits/stdc++.h>
using namespace std;
class aka{
	public:
	int a,b,s=0;
	void disp(){
		cout<<s;
	}
};

aka operator+(aka ob1,aka ob2){
	aka obj;
	obj.s=ob1.a+ob2.a;
	return obj;
}

int main(){
	aka o,tw,th;
	o.a=10;
	o.b=11;
	tw.a=20;
	tw.b=21;
	th=o+tw;
	cout<<th.s;
	return 0;
}
