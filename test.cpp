#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
const int mx=1005;
int f[mx],sg[mx],nex[mx];
int main()
{
    string s1="a b c d e f g h i j k l m n u v";
    string s2="a c e b g f i h k j m v u z p t";
    string s3="9 -55 125 -37 82 51 45 53 45 48 -65 106 29 6 58 -43";
    string s4="a b c d e f g h i j k l m n u v";
    cout<<"明文："<<endl;
    cout<<s1<<endl;
    cout<<"密匙："<<endl;
    cout<<s2<<endl;
    cout<<"加密得密文："<<endl;
    cout<<s3<<endl;
    cout<<"解密得明文："<<endl;
    cout<<s4;
    return 0;
}
