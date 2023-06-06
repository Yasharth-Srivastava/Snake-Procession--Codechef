#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int R;
	cin>>R;
	while(R--)
	{
	    int L;
	    cin>>L;
	    string str;
	    cin>>str;
	    bool valid = true;
	    
        for(int i=0;i<L;i++)
        {
            if(str[i] == '.')
            {
                valid = true;    
            }
            else if(str[i]=='H')
            {
                valid = true;
                int j=i;
                while(j<L)
                {
                    if(str[j+1] == '.')
                    {
                        j++;
                    }
                    else if(str[j+1]=='T'){valid = true;j++;i=j;
                    j=L;break;}
                    else{valid=false;j=L;i=L;j++;}
                }
            }
            else{
                valid=false;
                i=L;
                break;
            }
	    }
	    if(valid){
	        cout<<"Valid"<<endl;
	    }
	    else{
	        cout<<"Invalid"<<endl;
	    }
	}
	return 0;
}