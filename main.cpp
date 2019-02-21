# include <iostream>
using namespace std;

int main (){
	
	const int LEN = 3;
	int student [len];
	// int bob == 0;
	// int tom == 15;
	// int jill == 99;
	for(int i=0; i<len; i++) {
		cout << "enter student " << i+1 << "'s grade ";
		cin >> student [i];
	}
		
	for(int j=0; j<len; j++){
		cout << "Studemt " << j+1 << "'s grade is " << student [j] << endl;
}
	// cout << " Enter bob grade ";
	// cin >> student[0] ;
	// cout << "Enter tom grade ";
	// cin >> student [1];
	// cout << "enter jill grade";
	// cin >> student [2];
	
	// cout << " bob grade us :" << student [0] << endl;
	// cout << "tom  grade us :" << student [1]<< endl;
	// cout << "jill grade us :" << student [2] << endl;
	
	return 0;
}
	