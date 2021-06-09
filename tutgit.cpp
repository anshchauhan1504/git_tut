#include<iostream>//20BCE11016
#include<math.h>
using namespace std;
class TEST
{
    int TestCode;
    string description;
    int NoCandidate;
    int CenterReqd;//no. of center required
    int CALLCNTR()
    {
        
        CenterReqd=NoCandidate/100+1;
        cout<<"No. of centers are "<<CenterReqd<<endl;

         
    }
    public:
        int SCHEDULE()
        {
            cout<<"enter the test code: "<<endl;
            cin>>TestCode;
            cout<<"description about test: "<<endl;
            cin>>description;
            cout<<"enter no. of candidates: "<<endl;
            cin>>NoCandidate;
            CALLCNTR();

            
        }
        void disptest()
        {
            cout<<"The test code is: "<<TestCode<<endl;
            cout<<"Test is about which type: "<<description<<endl;
            cout<<"Total no. of candidates: "<<NoCandidate<<endl;
        }

};
int main()
{
    TEST s1;
    s1.SCHEDULE();
    s1.disptest();
    
    return 0;
}