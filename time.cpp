//#include <iostream>
//
//using namespace std;
//
//class Time {
//public:
//    Time() {
//        second = 0;
//        minute = 0;
//        hour = 0;
//    }
//
//    Time(int h, int m, int s) {
//        second = s;
//        minute = m;
//        hour = h;
//    }
//
//    void Print() const {
//        cout << hour << ":" << minute << ":" << second << endl;
//    }
//
//private:
//    int second;
//    int minute;
//    int hour;
//};
//
//int main() {
//    Time a = Time();
//    Time b = Time(11, 59, 59);
//    a.Print();
//    b.Print();
//    return 0;
//}