#include<ostream>
using namespace std;
int main(){
	int n;
	
	cout << "enter the positive  number:";
   	cin >> n;
	for(int i=1;i<=10;++i){
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
	return 0;
}
