#include <iostream>

using namespace std;

int main(){
	int shift=2;
	string s = "gluhtlishjrvbadvyyplkaohavbxpwolypzavvdhrvualeatlzzhnlzdpajoavcpnlulyljpwolyrlfdvykpzaolapkklvzftivbvmklhaoputtmhcvypalovsilpuluk";
	string res;
	int len = s.length();
	int i;
	for (shift = 1;shift < 26;shift++){
		res = "";
	    for(i=0;i<len;i++){
		int temp = s[i] + shift;
		if (temp > 122)
			temp = (temp%122) + 97;
		char c = (char) temp;
		//cout<<"c = "<<c<<"\n";
		res = res + c;

		//cout<<"res = "<<res<<"\n";
	    }
	cout<<"shift = "<<shift<<"\n";
	cout<<"res = "<<res<<"\n";
	}
//	cout<<"len = "<<len<<"\n";
	return 1;
}
