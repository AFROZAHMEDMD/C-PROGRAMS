#include<iostream>
using namespace std;
class greatest
{
    int x;
    public:int great(int,int,int);

};
int greatest::great(int a, int b, int c)
{
    a=x;
    if(a>b&&a>c)
        return a;
    else if(b>c)
        return b;
    else
        return c;
}
int main()
{
	int a,b,c;
    greatest obj;
    
    cout<<"enter the number:"<<endl;
    cin>>a>>b>>c;
    cout<<obj.great(a,b,c);
}

