#pragma once
#include <ctype.h>

typedef int address;


typedef struct InfoType{
    int length;
    int text;
} InfoType;

typedef struct Item{
    int pos;
    int size;
} Item;



typedef int KeyType1;
typedef int KeyType2;
void clearKey(KeyType2* key);

typedef int PointerType1;
typedef int BusyType2;
typedef int RelType2;
typedef int SizeType1;
typedef int IndexType2;



typedef struct KeySpace2 {
int busy;     // ������� ��������� ��������
int key;
int release;   // ����� ������ ��������
InfoType info;
} KeySpace2;

typedef struct FileKeySpace2 {
Item busy;     // ������� ��������� ��������
Item key;
Item release;   // ����� ������ ��������
Item info;
} FileKeySpace2;

typedef struct Table2 {
int size;
address arr;
} Table2;






