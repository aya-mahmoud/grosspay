#include <iostream>

using namespace std;

int main()
{
    double grosspay=16.78,stax,ftax,intax,net,nhours;
    int hinsurance=0,nemployees,ndepend;
    cout<<"enter no of employees:";
    cin>>nemployees;
    while (nemployees<1)
    {
        cout<<"invalid\n"<<"enter another number of employees: ";
        cin>>nemployees;
    }
    for(int i=1; i<=nemployees; i++)
    {
        cout<<"employee "<< i <<endl<<'\n';
        cout<<"enter no of hours:";
        cin>>nhours;
        while(nhours<0)
        {
            cout<<"invalid\n"<<"enter another no of hours:";
        }
        grosspay*=nhours;
        if(nhours>40)
        {
            grosspay+=25.17*(nhours-40);
        }
        cout<<"enter no of dependents:";
        cin>>ndepend;
        if(ndepend>=3)
        {
            hinsurance=35;
        }
        stax=grosspay*6/100;
        ftax=grosspay*14/100;
        intax=grosspay*5/100;
        net=grosspay-stax-ftax-intax-10-hinsurance;

        cout<<"workers gross pay: "<<grosspay <<"$"<<'\n'<<"withholding amount:"<<'\n';
        cout<<" 6% social security tax: "<<stax<<"$"<<'\n';
        cout<<" 14% federal income tax: "<<ftax<<"$"<<'\n';
        cout<<" 5% state income tax: "<<intax<<"$"<<'\n';
        cout<<"union dues: 10$"<<'\n';
        cout<<"health insurance for dependents: "<<hinsurance<<"$"<<'\n'<<'\n';
        cout<<"net-take home pay: "<<net<<"$"<<'\n'<<'\n';

    }
    return 0;
}
