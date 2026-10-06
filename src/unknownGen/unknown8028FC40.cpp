#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80296904();
void fn_8029A60C();
void fn_802A1A5C();
}
extern "C" {
int fn_8028FC40(){
 fn_80296904();
 return 0;
}
int fn_8028FC64(){
 fn_8029A60C();
 return 0;
}
int fn_8028FC88(){
 fn_8029A60C();
 fn_80296904();
 fn_802A1A5C();
 return 0;
}
int fn_8028FCB4(){
 fn_802A1A5C();
 return 0;
}
}
#pragma pop
