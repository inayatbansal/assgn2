#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a="Hello", b="World";
    cout<<a+b;
    return 0;
}


//part b

int main() {
    string s="Hello";
    reverse(s.begin(), s.end());
    cout<<s;
    return 0;
}


//part c


int main() {
    string s="Education", res="";
    for(char c: s) {
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U') 
            res+=c;
    }
    cout<<res;
    return 0;
}

//part d


int main() {
    string arr[] = {"banana","apple","cherry"};
    sort(arr, arr+3);
    for(int i=0;i<3;i++) cout<<arr[i]<<" ";
    return 0;
}


// part e

int main() {
    char c='A';
    if(c>='A' && c<='Z') c=c+32;
    cout<<c;
    return 0;
}

