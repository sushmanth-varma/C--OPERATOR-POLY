#include<iostream>
using namespace std;
class counter{
     private:
  	int count;
  	public:
  		//contructer to intialize the count
  		counter():count(0){}
  		
		  //overloading prefix ++ opeator
		  counter& operator++(){
		 count++;
		 return *this;
		  }
  		//overloading posfix
  		counter operator++(int){
  			counter temp=*this;
  			count++;
  			return temp;
		  }
  		void display()const{
		  cout<<count<<endl;
		  }
  		
};
int main(){
	 int initial_count;

    // Ask user for initial count
    cout << "Enter the initial count: ";
    cin >> initial_count;
	counter c;
	c.display();
	c++;
	return 0;
}
