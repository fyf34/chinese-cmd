#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
string a = "C:\\Users\\Administrator>";
int main(){
	cout<<"Microsoft Windows [版本10.0.16299.15]"<<endl;
	cout<<"(c) 2017Microsoft Corporation。保留所有权利。"<<endl<<endl;
	while(1){
		string b;
		cout << a;
		cin>>b;
		if(b=="关机") {
			cout << "关机中" << endl;
			Sleep(1000);
			system("shutdown -p"); 	
		}else if(b=="sb"){
			cout<<"你才sb,你全家都sb"<<endl; 
			cout << "爷不和你玩了" << endl;
			Sleep(1000);
			system("shutdown -p");
			Sleep(5000);
			cout<<"你怎么没关机？！"<<endl;
			return 0;
		}else{
			cout<<"'"<<b<<"' 不是内部或外部命令，也不是可运行的程序"<<endl;
			cout<<"或批处理文件。"<<endl<<endl;
		}
	}
	return 0;	
}
