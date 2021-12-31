/*
 * BSearch.cpp
 *
 *  Created on: 30 dic. 2021
 *      Author: diegobarbosa
 */

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int binarySearch(int A[],int x, int sz);

int main(){
	int n,m;
	cout<<"Type the size of the array C: "<<endl;
	cin>>n;
	int V[n];
	cout<<"Enter the values of the array: "<<endl;
	for(int i=0;i<n;i++){
		cin>>V[i];
	}

	cout<<"Enter the number to be searched: "<<endl;
	cin>> m;
	int res=binarySearch(V,m,n);
	cout<<"The number is: "<< res<<"!"<<endl;

	return 0;
}

int binarySearch(int A[],int x, int sz){
	int beg=0;
	int end=sz-1;
	int result=-1;
	int mid;

	while(beg<=end){
		mid=floor((beg+end)/2);
		if(A[mid]<=x){
			beg=mid+1;
			result=mid;
		}
		else{
			end=mid-1;
		}

	}

	return result;
}
