#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    //BissmiLLah.
    int n;
    int count = 0;
    string poly;
    cin >> n;
    int i = 0;
    while(i != n){
        cin >> poly;
        if(poly == "Tetrahedron")
            count += 4;
        else if(poly == "Cube")
            count += 6;
        else if(poly == "Octahedron")
            count += 8;
        else if(poly == "Dodecahedron") 
            count += 12;
        else if(poly == "Icosahedron")
            count += 20;
        else
        cout << "not in the list";
        i++;
    }
    cout << count << endl;

    return 0;
}