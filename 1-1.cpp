#include <iostream>
using namespace std;

int main(){
	int first, second;
	cin >> first >> second;
	if(first>1000||second>1000){
		cout << "error";
	}
	else{
		cout << "Do you want to say " << first << " and " << second << " ??";
	}
	return 0;
}
