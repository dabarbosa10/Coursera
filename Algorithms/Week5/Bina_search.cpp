/*
 * Bina_search.cpp
 *
 *  Created on: 3 ene. 2022
 *      Author: diegobarbosa
 */
#include <iostream>
#include <cassert>
#include <vector>
#include <cmath>
using namespace std;

long long int binary_search(const vector<long long int> &a,long long int x);
int linear_search(const vector<int> &a, int x);


int main() {
  long long int n;
  cin >> n;
  vector<long long int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  long long int m;
  cin >> m;
  vector<long long int> b(m);
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    cout<<binary_search(a,b[i])<<' ';
    //cout << linear_search(a, b[i]) << ' ';
  }
  cout<<endl;
}

long long int binary_search(const vector<long long int> &a, long long int x) {
  long long int left = 0, right = (int)a.size(), m;
  while(left<right){
	  m=floor((left+right)/2);
	  if(a[m]<x){
		  left=m+1;
	  }
	  else{
		  right=m;
	  }
  }
  if (a[left]==x){
	  return left;
  }

  return -1;
}

int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}



