#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//p1
/*int main(){
int n ;
cin >> n;
int the_number[n];
for(int i=0;i<n;i++){
cin >> the_number[i];}
for(int i=0;i<n;i++){
cout << the_number[i] << " ";}
}*/
//p2
/*float avg(int n, float num[n]) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += num[i];
    }
    return sum / n;
}
int main() {
    int n;
    cin >>n;
    float num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cout<<avg(n , num)<<endl;
}*/
//p3
/*int min(int n , int arr[n]) {
    int min;
    for (int i = 0 ; i < n ; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    cout <<"Min= "<< min(n, arr);
}*/
//p4
/*int indexOfLargestElement(double array[], int size) {
    int max=0;
    int index=0;
    for (int i=0; i<size; i++) {
        if (array[i] > max) {
            max = array[i];
            index = i;
        }
    }
    return index;
}
int main() {
    int size;
    cin >> size;
    double array[size];
    for (int i=0; i<size; i++) {
        cin >> array[i];
    }
    cout << indexOfLargestElement(array, size);
}*/
//p5
/*bool strictlyEqual(const int list1[], const int list2[], int size) {
    for (int i=0; i<size; i++) {
        if (list1[i]!=list2[i]) {
            return false;
        }
        return true;
    }
}
int main() {
    int size;
    cin>>size;
    int list1[size];
    int list2[size];
    for (int i=0; i<size; i++) {
        cin>>list1[i];
        cin>>list2[i];
    }
    cout << strictlyEqual(list1,list2,size) << endl;
}*/
//p6
/*int main() {
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int upp=0, low=0, chr=0, dig=0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 48 || arr[i] >= 58 && arr[i] <=64 || arr[i] >=91 && arr[i] <=96 || arr[i] >=123) chr++;
        else if (arr[i]>=48 && arr[i]<=57) dig++;
        else if (arr[i]>=65 && arr[i]<=90) upp++;
        else if (arr[i]>=97 && arr[i]<=122) low++;
    }
    cout << "Uppercase: "<<upp<<endl;
    cout << "Lowercase: "<<low<<endl;
    cout << "Digit: "<<dig<<endl;
    cout << "Special: "<<chr<<endl;
}*/
//p7
/*int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}*/
//p8
int main() {
    const int ROLLS = 10000;
    int count[6] = {0};
    srand(time(0));
    for (int i = 0; i < ROLLS; i++) {
        int roll = rand() % 6 + 1;
        count[roll - 1]++;
    }
    cout << "Face\tOccurrences" << endl;
    for (int i = 0; i < 6; i++) {
        cout << (i + 1) << "\t\t" << count[i] << endl;
    }
    return 0;
}