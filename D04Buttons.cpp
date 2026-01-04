#include<iostream> 

using namespace std ;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a,b,c,anna,katie;
        cin >> a;
        cin >> b;
        cin >> c;
        if (c%2){
            if (b > a)
                cout << "Second" << endl;
            else
                cout << "First" << endl;
        }else{
            if(a > b)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
    }
    return 0;
}