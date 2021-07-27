/*
 * Pair1.cpp
 *
 *  Created on: 26 jul. 2021
 *      Author: diegobarbosa
 */
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

long long MaxPairProductFast(const vector<int>& numbers);
long long MaxPairProduct(const vector<int>& numbers);

int main(){

	while(true){
		int n= rand()%4+2;
		cout<< n << endl;
		vector<int> a;

		for(int i=0;i<n;++i){
			a.push_back(rand()%10);
		}

		for(int i=0;i<n; ++i){
			cout<<a[i]<<' ';
		}
	cout<<endl;
	long long res1=MaxPairProduct(a);
	long long res2=MaxPairProductFast(a);

	if(res1 != res2){
		cout<<"Wrong answer: " << res1 << ' ' << res2<<endl;
		break;
	}
	else{
		cout<<"OK "<<endl;
	}

	}



	/*int n;
	cout<<"Vector length: ";
	cin>>n;
	cout<<endl;
	vector<int> numbers(n); //Vector called numbers
	for (int i=0; i<n; i++){
		cout<<"Number "<<i+1<<" :";
		cin>>numbers[i];
		cout<<endl;
	}


	long long product=MaxPairProductFast(vector<int>(1000000,0));
	cout<<product<<endl;*/
	return 0;
}

long long MaxPairProductFast(const vector<int>& numbers){
	int n=numbers.size();

	int max_index1=-1;
	for(int i=0; i<n; ++i){
		if((max_index1==-1)|| (numbers[i]>numbers[max_index1]))
			max_index1=i;
	}

	int max_index2=-1;
	for(int j=0; j<n;++j){
		if((j != max_index1) && ((max_index2==-1)||(numbers[j]> numbers[max_index2])))
			max_index2=j;
	}

	cout<<max_index1<<"  "<<max_index2<<endl;
	return ((long long)(numbers[max_index1]))*numbers[max_index2];

}

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



