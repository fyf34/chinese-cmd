#include<iostream>
#include<windows.h>
using namespace std;
string a = "C:\\Users\\Administrator>";
int main(){
	cout<<"chinese-cmd [版本0.1.0]"<<endl;
	cout<<"2023 fishoj 保留所有权利。"<<endl<<endl;
	while(1){
		string b;
		cout<<a;
		cin>>b; 
		if(b=="关机"){
			system("shutdown -p");
		}else if(b=="退出"){
			return 0;
		}else if(b=="遍历"){
			system("dir/s"); 
		}else{
			cout<<"'"<<b<<"' 不是内部或外部命令，也不是可运行的程序"<<endl;
			cout<<"或批处理文件。"<<endl<<endl;
		}
	}
	return 0;	
}
