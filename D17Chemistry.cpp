#include<iostream>
#include<vector>

using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector <int> frequency(26,0);
        for(int i =0 ; i < n ; i++){
            frequency[s[i] - 'a']++;
        }
        long long odd_frequency = 0 ;
        for (int i = 0 ; i < 26 ; i++){
            odd_frequency += frequency[i]%2;
        }

        if(odd_frequency > k +1){
            cout << "NO"<<endl;
        }else{
            cout <<"YES" << endl;
        }
    }

    return 0;
}