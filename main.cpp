#include<iostream>
#include<string>
#include <vector>
using namespace std;

int main()
{
  vector<string> list; //array of 5 strings
  int numItems = 0;
  char input;
  string itemName;

  while(1)
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;

    if(input == 'Q')
      break; 
    else if(input == 'A')
    {
      cout << "Enter name: ";
      cin >> itemName;
      list.push_back(itemName);
      numItems++;
    }
  }

  if(numItems == 0)
  {
    cout << "No items in list." << endl;
  }

  for(int i = 0; i < numItems; i++)
  {
    cout << i + 1 << ": " << list[i] << endl;
  }
 
  return 0;
}
