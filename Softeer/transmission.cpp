#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
        vector<int> input;
        for(int i = 0; i <8;i++){
                int num = 0;
                cin >> num;
                input.push_back(num);
        }

        if((input[0]==1)&&(input[1]==2)&&(input[2]==3)&&(input[3]==4)&& 
                (input[4]==5)&&(input[5]==6)&&(input[6]==7)&&(input[7]==8)){
                        cout << "ascending" << endl;
        }
        else if((input[0]==8)&&(input[1]==7)&&(input[2]==6)&&(input[3]==5)&& 
                (input[4]==4)&&(input[5]==3)&&(input[6]==2)&&(input[7]==1)){
                        cout << "descending" <<  endl;
        }
        else {
                cout << "mixed" << endl;
        }

        return 0;
}