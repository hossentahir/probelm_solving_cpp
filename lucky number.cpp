#include <iostream>
using namespace std;

bool islucky(int number){
	if (number==0) return false;
	
	while(number>0){
		int lastDigit=number%10;
		if(!(lastDigit == 4 || lastDigit == 7)) return false;
		int numberWithoutLastDigit = number/10;
		number = numberWithoutLastDigit;
	}
	
	return true;
}

int main() {
       int a,b; cin>>a>>b;
       int lucky=0;
       int flag=false;
       for(int i=a;i<=b;i++){
       	if(islucky(i)){
       		cout<<i<<" ";
       		flag=true;
		   } 
	   }
	   if(!flag) cout<<-1;
       
       

    return 0;
}
