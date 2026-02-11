// # Linear data structure, stores data in heterogeneous manner.
// # Where each element have its index


// #include<iostream>
// using namespace std;
// int main(){
//     // int x[3];
    
//     // int a[5] = {1,1,1,1,1};
//     // int size = sizeof(a)/sizeof(int);
//     // cout<<"Size is: "<<size<<endl;;
//     // for(int i=0; i<size; i++){
//     //     cout<<a[i];
//     // }
//     // cout<<endl;
//     // for(int i=0; i<size; i++){
//     //     cout<<a[i]+i;
//     // }
    

// }


#include<iostream>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	long long int copyOfN = n;
	int count=0;
	int count1;

    if(n==0){
		cout<<"5";
	}else{
		// for number of digits of value
	while(copyOfN!=0){
		copyOfN=copyOfN / 10;
		count++;
	}
	count1=count;
	int arr[count1];
	int i=0;
	while(count>0){
		int rem = n%10;
		arr[i] = rem;
		n=n/10;
		i++; count--;
	}

	for(int i=0; i<count1; i++){
		if(arr[i]==0){
			arr[i]=5;
		}
	}

	for(int i=count1-1; i>=0; i--){
		cout<<arr[i];
	}
	}
}