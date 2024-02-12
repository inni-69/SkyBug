#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int number ;
	int guess;
	number=rand() ; 
	do
	{   cout<<"Enter a guess"<<endl;
		cin>>guess;
		if(guess>number){
			cout<<"Too high"<<endl;
			cout<<endl;}
		else if (guess<number){
			cout<<"Too low"<<endl;
			cout<<endl;}
		else
			cout<<"Correct"<<endl;
	}
	while (guess!=number);

	return 0;
}