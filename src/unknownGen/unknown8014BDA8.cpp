#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_8014B98C();
void fn_8014B9C8();
void fn_8014BE68();
extern char lbl_8049F264[];
extern char lbl_8049F278[];
extern void *lbl_80564330;
void fn_8014BDD0();
void *fn_8014BE48();
}
extern "C" {
void fn_8014BDA8(){
 fn_80066188((int)fn_8014BDD0);
}
void fn_8014BDD0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564330,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8014BE48,(int)lbl_8049F278,104,(int)fn_8014B9C8,(int)fn_8014BE68,0,(int)lbl_8049F264);
}
void *fn_8014BE48(){return fn_8014B98C();}
}
#pragma pop
