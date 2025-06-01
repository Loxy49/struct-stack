#include <iostream>
#define MAXSTACK 10
using namespace std;

typedef int ItemType;

typedef struct {
    ItemType Item[MAXSTACK];
    int count;
} Stack;

void InitializeStack(Stack *s) {
    s->count = 0;
}

int Full(Stack *s){
    return (s->count == MAXSTACK);
}

int Empty(Stack *s){
    return (s->count == 0);
}

void Push(ItemType x, Stack *s){
    if (Full(s)){
        cout << "Stack penuh! Data tidak dapat masuk!" <<endl;
    }else{
        s->Item[s->count] = x;
        ++(s->count);
        cout << "Data " << x << " berhasil masuk ke stack!" <<endl;
    }
}

void Pop(Stack *s, ItemType *x){
    if(Empty(s)){
        cout << "Stack kosong!" <<endl;
    }else{
        --(s->count);
        *x = s->Item[s->count];
        cout << "Data " << *x << " berhasil di-pop dari stack!" <<endl;
    }
}
void PrintStack(Stack *S) {
    if (Empty(S)) {
        cout << "Stack kosong." << endl;
    } else {
        cout << "Isi Stack (dari atas ke bawah): ";
        for (int i = S->count - 1; i >= 0; i--) {
            cout << S->Item[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    Stack s;
    ItemType data;

    InitializeStack(&s);

    Push(10, &s);
    Push(20, &s);
    Push(30, &s);

    PrintStack(&s);

    Pop(&s, &data);
    cout << "Data yang di-pop: " << data << endl;

    PrintStack(&s);

    return 0;
}