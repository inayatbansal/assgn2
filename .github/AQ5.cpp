// part a

#include <iostream>
using namespace std;

int main() {
    int n=3;
    int diag[3];
    diag[0]=1; diag[1]=5; diag[2]=9;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==j) cout<<diag[i]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//part b

int main() {
    int n=3;
    int tri[7] = {1,2,3,4,5,6,7};
    int k=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==j) cout<<tri[k++]<<" ";
            else if(i==j+1 || j==i+1) cout<<tri[k++]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// part c

int main() {
    int n=3;
    int lower[6] = {1,2,3,4,5,6};
    int k=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i>=j) cout<<lower[k++]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}



// part d


int main() {
    int n=3;
    int upper[6] = {1,2,3,4,5,6};
    int k=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i<=j) cout<<upper[k++]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}


// part e


int main() {
    int n=3;
    int sym[6] = {1,2,3,4,5,6};
    int k=0;
    int a[3][3];
    a[0][0]=sym[k++]; a[1][0]=sym[k++]; a[1][1]=sym[k++]; 
    a[2][0]=sym[k++]; a[2][1]=sym[k++]; a[2][2]=sym[k++];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i>=j) cout<<a[i][j]<<" ";
            else cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
