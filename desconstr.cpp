#include<iostream>
using namespace std;
class name{
	public:name()
	{
	cout<<"constructor calling"<<endl;
	}
	public: ~name()
	{
	cout<<"destructor calling"<<endl;
	}
	
};
main()
{
	name obj;
	name obj2;
}
