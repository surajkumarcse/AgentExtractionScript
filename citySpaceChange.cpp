/*
* This C++ file is used to change the city name of those city having space in it. like New York, Palo Alto
*   to New%20York, Palo%20Alto
* It takes name from test.txt and output it into processedCity.txt
*/

#include<iostream>
#include<utility>
#include<stdlib.h>

using namespace std;

#define whatis(x) cout<<#x<<" : "<<x<<endl
typedef long long int lli;

int main() {
    freopen("test.txt", "r", stdin);
    freopen("processedCity.txt", "w", stdout);

    string line;
    while(getline(cin, line)) {

            int f = line.find(' ');

            string res = "%20";
            string first = "";
            string second = "";

            if(f != string::npos ) {
                first = line.substr(0, f);
                second = line.substr(f+1);
                cout<<first+res+second<<endl;
            }
        else 
            cout<<line<<endl;
        
    }   


    return 0;
}
