#include<iostream>
using namespace std;
class Array
{
    private:
        int iSize;
        int *Arr;
    public:
        Array (int x) //parameterized constructor
        {
            iSize = x;
           Arr = new int[iSize];

        }

        ~Array() // destructor
        {
            delete []Arr;
        }

        //Member functions
        void accept()
        {
            cout<<"Enter the elemets of array:"<<endl;
            int iCnt =0;
            for(iCnt =0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void display()
        {
            cout<<"Elements of the array are :"<<endl;
            int iCnt =0;
            for(iCnt =0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
        }

};


int main()
{
    int iLength =0;
    cout<<"Enter the number of elements that you want to store: "<<endl;
    cin>>iLength;
    Array aobj(iLength);
    aobj.accept();
    aobj.display();
    return 0;
}