#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8018EF94();
void fn_8018F080();
}
extern "C" {
void fn_8018F060(){return fn_8018EF94();}
void fn_8018F080(){}
void fn_8018F084(){return fn_8018F080();}
}
#pragma pop
