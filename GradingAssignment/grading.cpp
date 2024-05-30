// my first program in C++
#include <iostream>

using namespace std;

int main()
{
  int ExamScore;
  cout << "Enter your Examination Score:" << endl;
  cin >> ExamScore;
  if (ExamScore >= 70){
    cout << "You had grade A" << endl;
  }else if (ExamScore >= 60){
    cout << "You had grade B" << endl;
  }else if (ExamScore >= 50){
    cout << "You had grade C" << endl;
  }else if (ExamScore >= 40){
    cout << "You had grade D" << endl;
  }else {
    cout << "You had grade F" << endl;
  }
  return 0;
}
