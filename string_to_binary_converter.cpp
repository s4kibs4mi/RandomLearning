#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

string BinConvert(int x){
	string n;
	int i = 0;
	while(x > 0){
		n.push_back((x%2)+'0');
		x /= 2;
		i++;
	}
	while(n.length() < 8){
		n.push_back('0');
	}
	reverse(n.begin(),n.end());
	return n;
}

int main(){
	string text;
	vector <string> bin;
	vector <string> :: iterator it;
	long int i;
	while(getline(cin , text)){
		if(text.length()==0) break;
		i = 0;
		while(text[i]){
			bin.push_back(BinConvert(text[i]));
			i++;
		}
		cout << "String : " << endl << text << "\n" << endl;
		cout << "Binary : " << endl;
		it = bin.begin();
		while(it != bin.end()) cout << *it++;
		cout << endl;
		bin.clear();
	}
	
	return 0;
}
