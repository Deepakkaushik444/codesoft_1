#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
int yournumber;
int item;

bool guessnumber(){
cout<<"	enter your number";
	cin>>yournumber;
	if(item==yournumber){
		cout<<"congratulates !!! you correct guess";
		return false;
	}
	else if(item<yournumber){
		cout<<"hint:the number is less than "<<yournumber<<endl;
		return true;
	}
	else {
		cout<<"hint:the number is greater than "<<yournumber<<endl;
		return true;
	}
}

int main(){
	
	srand(time(0));
     item=rand()%20;
    cout<<"guess the number between 0 and 20"<<endl;
    
    while(guessnumber()){
    	
    		}
    return 0;
}