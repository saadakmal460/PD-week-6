#include <iostream>
using namespace std;



float percentageMarks(int math ,int chemistry ,int  english ,int socialScience , int biology);


main()
{
  int math , chemistry , english , socialScience , biology;
  string name;

  cout << "Enter name: ";
  cin >> name;

  cout << "Enter marks in maths: ";
  cin >> math; 

  cout << "Enter marks in chemistry: ";
  cin >> chemistry; 

  cout << "Enter marks in english: ";
  cin >> english; 

  cout << "Enter marks in socialScience: ";
  cin >> socialScience; 

  cout << "Enter marks in biology: ";
  cin >> biology; 

  float result = percentageMarks(math ,chemistry ,english ,socialScience ,biology);
  cout << name << endl;
  cout << "Total marks = 500" << endl;
  cout << result << " %" << endl;



  if (result >=90 && result <=100)
  {
    cout << "A+" <<endl;
  }

  else if(result>= 80 && result <90)
  {
    cout << "A" << endl;
  }

  else if (result >=70 && result <80)
  {
    cout << "B+" << endl;
  }
  
  else if(result >=60 && result <70 )
  {
    cout << "B" <<endl;

  }

  else if (result >=50 && result < 60)
  {
    cout << "C" <<endl;
  }
   
   
    else if (result >=40 && result < 50)
  {
    cout << "D" <<endl;
  }

    else if (result < 40)
  {
    cout << "F" <<endl;
  }
  
  

 

}






float percentageMarks(int math ,int chemistry ,int  english ,int socialScience , int biology)
{
    float marks = math + chemistry + english + socialScience + biology;
    float percent = (marks/500) * 100;

    return percent;

}