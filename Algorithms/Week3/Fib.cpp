/*
 * Fib.cpp
 *
 *  Created on: 30 jul. 2021
 *      Author: diegobarbosa
 */

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

long long Fibo(int m);

int main(){
	int n;
	//cout<<"nth number Fibonacci Sequence:  "<<endl;
	cin>>n;
	if(n<0){
		cout<<"Not a valid number"<<endl;
		}
	else{
	long long number=Fibo(n);
	cout<< number<<endl;
	}

return 0;
}



long long Fibo(int m){
	unsigned long long int arr1[m];
	if(m==0 || m==1){
		return m;
	}
	else{
	arr1[0]=1;
	arr1[1]=1;
	for(int i=2;i<m;i++){
		arr1[i]=arr1[i-1]+arr1[i-2];
		//cout<<i+1<<"  "<<arr1[i]<<endl;
	}


	return (long long)arr1[m-1];
	}



}
