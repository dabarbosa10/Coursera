/*
 * MajorElement.cpp
 *
 *  Created on: 30 dic. 2021
 *      Author: diegobarbosa
 */
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int get_majority_element(int a[],int m, int left, int right);

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  cout << (get_majority_element(a,n, 0, n) != -1) << '\n';
}

int get_majority_element(int a[],int m, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  int currentElement;
  int count;
  int n=m;
  for(int i=1; i<n; i++){
	  currentElement=a[i];
	  count=0;
	  for(int j=0;j<n;j++){
		  if(a[j]==currentElement){
			  count=count+1;
		  }
	  if(count>(n/2)){
		  return currentElement;
	  }
	  }


  }
  return -1;
}


