#include <iostream>
using namespace std;
class S{
    private:
    int stck[100];
	int top=-1;
    public:
    void push(int value)
    {
        if(stackfull())
        {
            cout<<"overflow"<<endl;
        }
        else
        {
            top++;
            stck[top]=value;
        }
    }
    bool stackfull()
    {
        if(top==99)
        return true;
        else
        return false;
        
    }
    int pop()
    {
        if(stackempty())
        cout<<"underflow"<<endl;
        else
        return stck[top--];
        return(-1);
    }
    bool stackempty()
    {
        if(top==-1)
        return true;
        else
        return false;
    }
  void  display()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<stck[i]<<" ";
        }
    }
};

int main()
{
    S s;
    int ch,value;
    do{
        cout<<endl<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"enter the value to be pushed in the stack: ";
			cin>>value; s.push(value);
            break;
            case 2:s.pop();
            break;
            case 3:s.display();
            break;
        }
    }
    while(ch!=4);
}
