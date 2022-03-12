// Header Files
#include<iostream>
#include<string>
#include<vector>
using namespace std;


/*
 * 
 */
string expandedString (string inputStr)
{
    string  answer;
    // Write your code here
    int i;
    string s = inputStr;
    for(i=s.length()-1; i>=0; i--){

        if(inputStr[i] == '('){
            int j = i+1;
            int k = 0;
            while(answer[j]!=')'){
                k++;
                j++;
            }
            string temp = inputStr.substr(i+1,k);
            int m = j+2;
            int r = 0;
            while(inputStr[m]!='}'){
                r*=10;
                r += (inputStr[m]-'0');
                m++;
            }
            int n;
            string temp2;
            for(n=0;n<r;n++){
                temp2+=temp;
            }
            string t1 = inputStr.substr(0,i)+temp2;
            string t2 = t1 + inputStr.substr(m+1,inputStr.length()-m-1);
            inputStr = t2;
        }
            
    }
    answer+=inputStr;
    return answer;
}

int main()
{
    
	//input for inputStr
	string inputStr;
	inputStr = "(ab(c){3}){2}";
	
    string result = expandedString(inputStr);
	cout << result;
	
	
    return 0;
}
