#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002C31C();
void fn_800300A0();
void *fn_8003B5E0();
void fn_8003B61C();
void fn_8003B7FC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_804688D4[];
extern void *lbl_805620B8;
void fn_8003B76C();
void *fn_8003B7DC();
}
extern "C" {
void fn_8003B744(){
 fn_80066188((int)fn_8003B76C);
}
void fn_8003B76C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805620B8,(int)fn_800300A0,(int)fn_8002C31C,(int)fn_8003B7DC,(int)lbl_804688D4,56,(int)fn_8003B61C,(int)fn_8003B7FC,0,0);
}
void *fn_8003B7DC(){return fn_8003B5E0();}
}
#pragma pop
