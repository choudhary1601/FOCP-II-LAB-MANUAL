// #include <iostream>

// using namespace std;
// int main()
// {
//     int rno;
//     cout<<"\n Enter rno: ";

//     cin>>rno;

//     cout<<"Your rno is : "<<rno;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int rno ,m1,m2,m3;
//     cout<<"\n Enter rno:";
//     cin>>rno>>m1>>m2>>m3;
//     cout<<"your rollno is;"<<rno<<endl<<m1<<endl<<m2<<endl<<m3;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int Student1, Student2, Student3;
    cout << "\n ENTER Student 1 MARKS: ";
    cin >> Student1;
    cout << "\n ENTER Student 2 MARKS: ";
    cin >> Student2;
    cout << "\n ENTER Student 3 MARKS: ";
    cin >> Student3;

    cout << "\n Student 1 MARKS: " << Student1 << "\n Student 2 MARKS: " << Student2 << "\n Student 3 MARKS: " << Student3 << "\n AVG MARKS: " << (Student1 + Student2 + Student3) / 2;
    return 0;
}

