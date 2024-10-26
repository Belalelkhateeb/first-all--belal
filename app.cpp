/* #include <iomanip>
#include <iostream>

using namespace std;

  int main()

{
  double dob = 18.9; // 8
  cout << sizeof (dob) << endl;
  float f = 19.3810f +193.33f;
  cout << sizeof (f) << endl;
  float fl = 9.8f + 6.8f; // 4
  cout << fl <<endl;
  cout << sizeof(fl)<< endl;
  
  return 0;
}*/
//belal
/* #include <iomanip>
#include <iostream>

using namespace std;

  int main()

{
  char a = 'a';
  auto C = "H";
  cout << sizeof (C) << endl; // 1
  cout << sizeof (a) <<endl; // 8
  char d = 'Z';
  cout << int (d) << endl; // ASCII Value return num 
  cout << char (90) << endl; // ASCII Value return char

  return 0;
}*/

/*#include <iostream>
using namespace std;

void without_value()
{

  // Nothing To Return

}

  int main()

{
  bool test_one = 10 > 100;
  bool test_two = 10 > 3;
  cout << test_one << endl;
  cout << test_two << endl;
  int num = 1;
  cout << sizeof (num) << endl; // 4
  cout << sizeof (test_one) << endl; //1

  return 0;
}*/

/*#include <iomanip>
#include <iostream>

using namespace std;

  int main()

{
  short int last_age = 100;
  short new_age = 100;
  cout << sizeof (last_age) <<endl; // 2
  cout << sizeof (short) <<endl; // 2
  cout << sizeof (long) <<endl; // 4
  cout << sizeof (long long ) <<endl; // 8
  int num_one = -100;
  signed int num_two = 0;
  cout <<num_one<<endl;
  cout <<num_two<<endl;
  //unsigned int num_three = -199; // Problem
  cout <<num_three <<endl;
  long long num_five=10000100001111;
  cout <<num_five<<endl;
  using dady = long long int;
  dady num_six = 199991991919; // dady replaed long long 
  cout <<num_six<<endl;
  typedef long long int dady;
  dady num_seven =1000000000000;
  cout <<num_seven<<endl; 

  return 0;
}*/

/*#include <iomanip>
#include <iostream>

using namespace std;

  int main()

{
  int a = 20;
  double s = 20.5;
  cout << a+s <<endl; // 40.5
  cout <<sizeof(a+s) <<endl; // 8
  cout <<  a+(int)s <<endl; // 40
  cout <<sizeof( a+(int)s) <<endl; // 8
  char w ='v';
  cout << int (w) <<endl; 
  int b = 28;
  double q = 10.2;
  cout << w + b + q<<endl; // ASCII
  signed char m = 'A';
  cout << int (m) << endl;
  cout << 24 % 5 <<endl;
  //cout << 24.2 % 5 <<endl;// problem


  return 0;
}*/
/*#include <iostream>
#include <iomanip>
using namespace std;

// && = And  // All conditions  
//|| = or 1 condition only 
//!= not equal
int main()

{
  //int age = 19;
  //int point = 150;
  //cout << ( point >= 300 && age>= 20)  << endl;// false
  int f = 15;
  int b = 800;
  cout << ( b >= 300 || f>= 20)  << endl; // true





}*/

/*#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int age = 12;
  int points = 450;
  if(age > 19)
  {
  cout << " WELCOME YOUR AGE IS OK"<<endl;
  }
  else if (points > 500 )
  {
  cout << "welcome your points is ok " << endl;
  }
  else
  {
  cout << "I am Sorry"<<endl;

  }
  return 0;

}*/

/*#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
  int age = 30;
  int points = 1500;
  if (age >= 25)
  {
    cout << "WELCOME YOUR AGE IS OK"<<endl;
    if (points >= 1000)
    {
      cout << "YOU ARE VIP"<<endl;
    }
  }

}*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

  int age = 35;
  int points = 500;

// if (age >=45)
//   {
//     cout << "Your Age is Ok 222"<<endl;
//   }
//   else
//   {
//     if (points>=600)
//     {
//       cout <<"your points is ok"<<endl;
//     }
//     else
//     {
//       cout << "Your are not ok "<<endl;

//     }
//   }
  cout << ( age <= 30 ? " Age is Ok\n"  : ( points >= 600 ? " p is Ok\n"  : " p is Not Ok\n"  )  );//nested condition
  //cout << ( points >= 600 ? " p is Ok\n"  : " p is Not Ok\n"  );

  //string msg =  age <= 30 ? " Age is Ok\n"  : " Age is Not Ok\n";
  //cout << msg <<endl;


  return 0;

}












