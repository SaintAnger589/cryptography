#include <iostream>

using namespace std;

int main(){
	string shift_string="skull";
	string s = "Klkbnqlcytfysryucocphgbdizzfcmjwkuchzyeswfogmmetwwossdchrzyldsbwnydednzwnefydthtddbojicemlucdygicczhoadrzcylwadsxpilpiecskomoltejtkmqqymehpmmjxyolwpeewjckznpccpsvsxauyodhalmriocwpelwbcniyfxmwjcemcyrazdqlsomdbfljwnbijxpddsyoehxpceswtoxwbleecsaxcnuetzywfn";
	int i;
	///caesar shift of negative 1
	/***************************************/
	string res_string;
	int len_shift = shift_string.length();
	for(i=0;i<len_shift;i++){
	    int temp = shift_string[i] - 1;
	    if (temp < 97)
		temp = (temp - 97 + 122);
	    char p = (char) temp;
	    res_string = res_string + p;
	}
	cout<<"res_string = "<<res_string;

	/**************************************/
	string res;
	int shift = 0;
	int len = s.length();
	int p=0;
	for (i=0;i<len;i++){
            int temp = s[i] + res_string[p++];
	    if (p == (len_shift-1))
		    p=0;
	    if (temp > 122)
		temp = (temp%122) + 97;
	    char c = (char) temp;
	    res = res  +c;
	}
//	for (shift = 1;shift < 26;shift++){
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
//	}
//	cout<<"len = "<<len<<"\n";
	return 1;
}
