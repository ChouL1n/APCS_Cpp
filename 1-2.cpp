#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if(a==b||a>1000||b>1000){
		cout << "error";
	}else{
		cout << b << " " << a;
	}
	return 0;
}
