#include <iostream>
#include <vector>

using namespace std;

int main() {
//    vector<int> a;
//    for (int i = 0; i < 100; i++) {
//        a.push_back(i + 1);
//    }
//    for (int i: a) {
//        cout << i << " ";
//    }

    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<int> v6{10};
    vector<string> v7{10, "hi"};
    cout << v1.size() << " " << v2.size() << " " << v3.size() << " " << v4.size() << " " << v5.size() << " "
         << v6.size() << " " << v7.size() << endl;
    for (string &a: v7) {
        cout << a << " ";
    }
//    vector<int &> a;/*引用不是对象,没有地址*/
    int a,b,c=0;
    int *ptrs[3]={&a,&b,&c};
    int *(&array)[3]=ptrs;
    cout<<*(array[2])<<endl;
    int *(*brray)[3]=&ptrs;
    return 0;
}