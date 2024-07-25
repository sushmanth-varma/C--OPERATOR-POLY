#include <iostream> 
  
using namespace std; 
  
int main() 
{ 
  
    int x = 5; 
    cout << "Value before using post increment operator is "
            ": "
         << x << endl; 
    int temp = x++; 
    cout << "The value stored by temp is : " << temp 
         << endl; 
    cout << "After using the post increment operator is : "
         << x << endl; 
    temp = ++x; 
    cout << "The value stored by temp is : " << temp 
         << endl; 
    cout << "After using the post increment operator is : "
         << x << endl; 
    return 0; 
}
