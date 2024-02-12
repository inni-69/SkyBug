# include <iostream>
using namespace std;

int main() {
  float n1,n2;
  cout<<"Enter two numbers"<<endl;
  cin>>n1>>n2;
  char op;
  cout << "Enter operator: +, -, *, /: "<<endl;;
  cin>>op;
if(op =='+'){
         cout<<n1<<"+"<<n2<<"="<<n1+n2;    
}
else if(op =='-')
{
    cout<<n1<<"-"<<n2<<"="<<n1-n2;       
}
else if(op =='*')

  {
     cout << n1 << " * " << n2 << " = " << n1 * n2;  
  }
else if(op =='/')
    {
        cout << n1 << " / " << n2 << " = " << n1 / n2; 
    }
    
      else
      cout << "The operator you chose is not correct";
      
  }



