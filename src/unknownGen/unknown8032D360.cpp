#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_8032D114();
void fn_8032D160();
void fn_80333F14();
extern char lbl_8045386C[];
extern char lbl_80535E34[];
void fn_8032D388();
void *fn_8032D3F4();
}
extern "C" {
void fn_8032D360(){
 fn_80066188((int)fn_8032D388);
}
void fn_8032D388(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E34,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032D3F4,(int)lbl_8045386C,84,(int)fn_8032D160,0,0,0);
}
void *fn_8032D3F4(){return fn_8032D114();}
}
#pragma pop
