/*
 * GCD.cpp
 *
 *  Created on: 3 ago. 2021
 *      Author: diegobarbosa
 */
#include <iostream>
using namespace std;

long long gcd(long long a, long long b);

int main(){
	long long m,n;
	cin>>n;
	cin>>m;
	//cout<< n << m<<endl;
	long result=gcd(n,m);
	cout<<result<<endl;
	return 0;
}

long long gcd(long long a, long long b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b, a%b);
	}

}



