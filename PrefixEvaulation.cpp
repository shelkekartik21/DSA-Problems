#include<bits/stdc++.h>
using namespace std;

int prefixEval(string s){
	int n = s.size();
	stack<int> st;
	
	for(int i=n-1; i>=0; i--){
		if(s[i] >= '0' && s[i] <= '9'){
			st.push(s[i] - '0');
		}else{
			int num1 = st.top();
			st.pop();
			int num2 = st.top();
			st.pop();
			switch(s[i]){
				case '+':
					st.push(num1 + num2);
					break;
				case '-':
					st.push(num1 - num2);
					break;
				case '*':
					st.push(num1 * num2);
					break;
				case '/':
					st.push(num1 / num2);
					break;
			}
		}
	}
	return st.top();
}

int main(){
	string sr;
	cin>>sr;
	
	int ans = prefixEval(sr);
	
	cout<<ans<<endl;
	
	return 0;
}
