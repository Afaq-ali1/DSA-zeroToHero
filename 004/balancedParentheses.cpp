#include <iostream>
using namespace std;

class Stack 
{
    int top1, top2, maxSize;
    int* stack;
	public:
	
	bool isBalanced(string s)
	{
		char stack[1000];
		int top=-1;
		for(int i=0;i<s.length();i++)
		{
			char c=s[i];
			if(c=='('||c=='['||c=='{')
			{
				stack[++top]=c;
			}
			else if(c==')')
			{
				if(top==-1||stack[top]!='(')
				{
					return false;
				}
				top--;
			}
			else if(c==']')
			{
				if(top==-1||stack[top]!='[')
				{return false;
				}
				top--;
			}
			else if(c=='}')
			{
				if(top==-1||stack[top]!='{')
				{
					return false;
				}
				top--;
			}
		}
		if(top==-1)
		{
			return true;
		}
		else{return false;
		}
	}
};

int main() {
    Stack S;
    string s;
    cin>>s;
    if(S.isBalanced(s))
    {
    	cout<<"the seq is balamced";
	}
	else{
		cout<<"the seq is not balamced";
	
	}
}

