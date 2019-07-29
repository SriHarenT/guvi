#include "iostream"
using namespace std;
int main()
{
	int diff=0;
	string str1,str2;
	cin>>str1;
	cin>>str2;
	if(str1.size()!=str2.size())
	{
		return false;
	}
	else
	{
		for(int i = 0; i < str1.size(); ++i)
    	{
        	if(str1[i] != str2[i])
        	{
            	diff++;
    		}
		
		}
	}
	if(diff==1)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	return 0;
}
