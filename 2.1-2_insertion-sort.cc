/** 2.1-2
 *  
 */

#include <iostream>

using namespace std;

void insert_sort(unsigned int count, int arr[])
{
    for(unsigned int j = 1; j < count; ++j){
        int key = arr[j];
        int i = j-1;
        while( i >= 0 &&  arr[i] < key){
            arr[i+1] = arr[i];
            i = i-1;
        } 
        arr[i+1] = key;
    }
}

int main(int argc, char**argv)
{
    int data[6] = {4,3,2,5,6,1};
    cout << "in:" << endl;
    for(int i = 0; i < 6; ++i){
        cout << data[i] << ", ";
    }
    cout << endl;

    insert_sort(6, data);
    
    cout << "out:" << endl;
    for(int i = 0; i < 6; ++i){
        cout << data[i] << ", ";
    }
    cout << endl;

}

