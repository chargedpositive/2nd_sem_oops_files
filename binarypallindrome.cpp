#include<iostream>
#include<math.h>
using namespace std;

int binaryPalin (int n){

     int bDigits = (log2(n)+1);
	    int left = 1 << (bDigits-1);
	    int right = 1;
        cout<<(5&4);
	    for(int i = 0; i<bDigits/2; i++){
	        if(((n & left)!=0) == ((n & right)!=0)){
	            left = left>>1;
	            right = right<<1;
	        }else return 0;
	    }	     
       return 1;
}

int main(){
    cout<<binaryPalin(5);
}