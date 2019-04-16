#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <string.h> // memset
using namespace std;

int main(int argc, char *argv[])
{
    string x = " ";
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        int m;
        cin>>m;
        string y =" ";
        for (int j = 0; j < m; ++j) {
            string z = x;
            cin>>y;
            int aux = 0;
            int auxx = 0;
            for(int k = 0; k<z.size();++k){
              if(z[k]==y[aux]) {
                  aux++;
                  auxx++;
              }
            }
            if(y.size() != auxx) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;

        }
    }
    return 0;
}
