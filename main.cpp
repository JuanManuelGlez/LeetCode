#include <bits/stdc++.h>
using namespace std;
  
// Driver code
int main (){

int arr[6]= {-1,0,3,5,9,12};
int target = 9;

int high = *(&arr + 1) - arr;
cout<<"high vale "<< high<<endl;
int low = 0 ;
int mid = (high+low)/2;



while(low!=high){

	mid= (high+low)/2;
	
	if (target== arr[mid]){
		cout<<"se encontro el elemento en la pocision "<<mid<<endl;
		return mid;
	}
	else if (target > arr[mid]){
		low=mid+1;
		cout<<"mas grande, mid vale "<<mid<<endl;
	}
	else if (target<arr[mid]){
		high=mid-1;
		cout<<"mas chico, mid vale "<<mid<<endl;
	}
}

}
