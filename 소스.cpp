#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;
//
//string solution(vector<int> numbers) {
//    string answer = "";
//    vector<string> temp;
//    int size = numbers.size();
//
//    for (int i = 0; i < size; i++) {
//        string tempString = to_string(numbers[i]);
//        temp.push_back(tempString);
//    }
//
//    sort(temp.begin(), temp.end(), [](string a, string b) {
//        string fst = a + b;
//        string sec = b + a;
//        return fst > sec;
//    });
//
//    for (int i = 0; i < size; i++) {
//        answer += temp[i];
//    }
//
//
//    // 0 이 2개 이상인 경우 문제 00 이 나와서 오류 발생. 내림차 였기 때문에 가장 앞의 숫자가 0인 경우. 0만 더함으로 0 작업.
//    if (answer[0] == '0') return "0";
//    else return answer;
//}


//string solution(string s) {
//    string answer = s;
//
//
//
//    sort(answer.begin(), answer.end(), [](char a, char b)
//    {
//        if (a > b) return true;
//        else return false;
//    }
//    );
//    return answer;
//}


long long solution(long long n) {
    long long answer = 0;

    string hi = to_string(n);
    sort(hi.begin(), hi.end(), [](char a, char b) {
        return a > b;
    });


    answer = stoll(hi);


    return answer;
}


void main() {

}