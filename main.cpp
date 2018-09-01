#include <iostream>

using namespace std;

int main()
{
    int mark;
     cout<<"enter grade" << endl;
    cin>>mark;

    if(mark >=80 && mark <=100)

    {
        cout<<"grade A";


    }
       else if(mark >=75 && mark <=79)
       {
           cout<<"grade B+";

       }
       else if(mark >=70 && mark <= 74)
       {
           cout<<"grade B";

       }
       else if(mark >=65 && mark <=69)
                {
                    cout<<"grade C+";

                }
            else if(mark >=60 && mark <=64)
            {
                cout<<"grade C";

            }
            else if(mark >=55 && mark <=59)
          {
              cout<<"grade D+";

          }
        else if(mark >=50 && mark <=54)
        {
            cout<<"grade D";
        }
        else if(mark >=45 && mark <=49)
        {
            cout<<"grade E";
        }
        else if(mark >=0 && mark <=39)
        {
            cout<<"grade F";
        }
        return 0;
        }
