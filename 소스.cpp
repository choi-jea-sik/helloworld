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
//    // 0 �� 2�� �̻��� ��� ���� 00 �� ���ͼ� ���� �߻�. ������ ���� ������ ���� ���� ���ڰ� 0�� ���. 0�� �������� 0 �۾�.
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