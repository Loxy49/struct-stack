#include <iostream>
#define MAXSTACK 10
using namespace std;

typedef int ItemType
typedef struct {
    ItemType Item[MAXSTACK];
    int count;
} Stack;
