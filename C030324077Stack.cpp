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