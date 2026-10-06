#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8005900C();
void fn_800607F4(int);
}
extern "C" {
void *fn_80058C3C(){return fn_8005900C();}
void fn_80058C5C(){
 fn_800607F4(1);
}
void fn_80058C80(){
 fn_800607F4(2);
}
void fn_80058CA4(){
 fn_800607F4(3);
}
}
#pragma pop
