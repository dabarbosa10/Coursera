/*
 * Maximum.cpp
 *
 *  Created on: 25 dic. 2021
 *      Author: diegobarbosa
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


long long prod(vector<int> a, vector<int> b);

int main(){

	int s;
	cin>>s;
	vector<int> A(s);
	vector<int> B(s);

	for(int l=0;l<s;l++){
		cin>>A[l];
	}
	for(int n=0;n<s;n++){
		cin>>B[n];
	}

	cout<<prod(A,B)<<endl;
	return 0;
}

long long prod(vector<int> a, vector<int> b){
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	long long dot=0;
	for(int i=0;i<a.size();i++){
		dot=dot+((long long)a[i])*b[i];
	}

	return dot;

}
