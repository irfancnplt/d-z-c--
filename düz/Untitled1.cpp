#include <iostream>

using namespace std;

int main() {
	int dizi[9]={1,2,3,4,5,6,7,8,9};
     int dboyutu=9;
	int bol;	
	int sayac=0;
	
	cout <<"bolunmesi gereken sayi:";
	cin>>bol;
	while(sayac != dboyutu){
		if(sayac % bol !=0){
			cout << dizi[sayac];
		}
		else if(sayac % bol ==0){
			cout <<endl;
			cout << dizi[sayac];
		}
		sayac++;
	} 
	
	
	 

		
	return 0; 
}
