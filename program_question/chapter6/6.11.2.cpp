
#include <iostream>
#include <cctype>
#define SIZE 10

using namespace std;
int main()
{
    cout << "最多输入10个数字，计算平均值，输入非数字停止输入：" << endl;
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

    cout << "平均值为" << aver << ", 且数组中有" << count2 << "个数字大于平均值。" << endl;

    return 0;
}
