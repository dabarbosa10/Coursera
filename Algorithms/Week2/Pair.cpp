/*
 * Pair.cpp
 *
 *  Created on: 26 jul. 2021
 *      Author: diegobarbosa
 */

#include <iostream>
#include <vector>

using namespace std;

long long MaxPairProduct(const vector<int>& numbers){
	long long product =0;
	int n=numbers.size();
	for (int i=0; i<n; ++i){
		for (int j=i+1; j<n; ++j){
		product=max(product,((long long)numbers[i])*numbers[j]);
		}
	}
	return product;
}

int main(){
	int n;
	cout<<"Vector length: ";
	cin>>n;
	cout<<endl;
	vector<int> numbers(n); //Vector called numbers
	for (int i=0; i<n; i++){
		cout<<"Number "<<i+1<<" :";
		cin>>numbers[i];
		cout<<endl;
	}

	long long product=MaxPairProduct(numbers);
	cout<<product<<endl;
	return 0;
}


