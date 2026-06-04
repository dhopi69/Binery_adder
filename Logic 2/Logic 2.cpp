

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;






int main()
{
	int sum = 0;
	int sum2 = 0;
	string s;
	string s2;
	cout << "enter number 1 in binery" << endl;
	cin >> s;
	cout << "enter number 2 in binery" << endl;
	cin >> s2;


	vector<int> Bits;
 
	for (int i = 0; i < s.length(); i++) {              //loop that goes through each char and converts them first to char then i use a trich that each char has representation int and '0'=48 convert it to int
		char c = s[i];                                                           
		int a = c - '0';
		int e = s.length() - 1 - i;
		sum = sum + a * (1 << e);             // here i use 1 << e left bit shift operator that in this case will be same as 2^e  

	}
	for (int i = 0; i < s2.length(); i++) {         // same for 2nd string 
		char c = s2[i];
		int a = c - '0';
		int e = s2.length() - 1 - i;
		sum2 = sum2 + a * (1 << e);
   
	}
	int b = sum + sum2;

	do {
		Bits.push_back(b % 2);                          // i use do while because if we have say 0 and 0 b is 0 and noraml while will not run and vector will be empty
 		b = b/2;
	} while (b > 0);
	reverse(Bits.begin(), Bits.end());                // with vectors we can only direcly put new element to it from the back but the result in this case will be reversed so i use <algorithm> lib and function reverse()


	
	
	cout << "Binary result: ";
	for (int bit : Bits) {                                          // for output of a vector we need a loop that goes through all elements of a vector 
		cout << bit;
	}
	cout << endl;

	cin.get();
	cin.get();
}
