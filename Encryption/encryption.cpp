//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {

    unsigned short length = s.length();
	float root = sqrt(length);
    unsigned short columns = ceil(root);
	string result = "";

	for (size_t i = 0; i < columns; i++) {

		for (size_t j = i; j < length; j += columns) {
			result.push_back(s[j]);
		}

		result.push_back(' ');
	}


    return result;

}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    //fout << result << "\n";
	cout << result << endl;

    //fout.close();

    return 0;
}
