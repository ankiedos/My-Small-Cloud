#include <iostream>
#include <string>
using namespace std;
 
struct Stack
{
    int val;
    Stack *next;
};
 
//dodaj element do stosu (root)
void dodaj (Stack **root)
{
    Stack *new_ = new Stack;
    cin >> new_->val;
    new_->next = *root;
    *root = new_;
}
 
//zdejmij element ze stosu (root)
void zdejmij (Stack **root)
{
    if (*root)//sprawdz czy stos nie jest juz pusty {
    {
        Stack *temp = *root;
        *root = (*root)->next;
        cout << temp->val << "\n";
        delete temp;
    }
}
int main()
{
    enum STACKCOM {ADD, DEL, END, null} choose = null;
    istream& operator>>(istream& stackin, STACKCOM stcom)
    {
        stackin >> (string)stcom;
        return stcom;
    }
    return 0;
}