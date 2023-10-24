#include<bits/stdc++.h>
using namespace std;
struct linkedlist{
    int data; /*creating a int type variable for storing values*/
     linkedlist * ptr; /*creating a linkedlist type pointer to connect the nodes*/
};



    int main(int argc, char const *argv[])
    {
        /* code */
        struct linkedlist first,second,third;
        first.data= 45; /*Storing the value in first node*/
        first.ptr=&second; /*Linking the first node with second node*/
        second.data=67;
        second.ptr=&third;
        third.data=89;
        third.ptr=&first;
        // cout<<first.data;

        cout<<first.data<<"->"<< second.data<<"->"<<third.data;
        return 0;
    }

