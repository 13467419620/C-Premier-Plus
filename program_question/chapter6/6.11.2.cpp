
#include <iostream>
#include <cctype>
#define SIZE 10

using namespace std;
int main()
{
    cout << "�������10�����֣�����ƽ��ֵ�����������ֹͣ���룺" << endl;
    double arr[SIZE];
    double sum=0,donation;
    int count=0;

    while( (cin >> donation) && count < SIZE ){

            arr[count]=donation;
            sum+=donation;
            count++;

    }

    double aver=sum/count;
    int count2=0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]>aver){
            count2++;
        }
    }

    cout << "ƽ��ֵΪ" << aver << ", ����������" << count2 << "�����ִ���ƽ��ֵ��" << endl;

    return 0;
}
