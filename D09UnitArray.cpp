#include<iostream>
#include<vector> 

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, countNeg = 0, countPos = 0 ,operations = 0 ;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0 ; i<n ; i++){
            cin >> arr[i]; 
            if(arr[i] == -1){
                countNeg++;
            }else{
                countPos++;
            }
        }
        while(countPos < countNeg || countNeg % 2 == 1){
            operations++;
            countPos++;
            countNeg--;
        }
        cout << operations << endl;
    }
}