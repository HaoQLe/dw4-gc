#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002942C();
void *fn_8002C80C();
void fn_8002C848();
void fn_8002C9AC();
void fn_80032D80();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80465084[];
extern char lbl_8055D324[8];
extern void *lbl_80561914;
void fn_8002C918();
void *fn_8002C98C();
}
extern "C" {
void fn_8002C8F0(){
 fn_80066188((int)fn_8002C918);
}
void fn_8002C918(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561914,(int)fn_80032D80,(int)fn_8002942C,(int)fn_8002C98C,(int)lbl_80465084,56,(int)fn_8002C848,(int)fn_8002C9AC,0,(int)lbl_8055D324);
}
void *fn_8002C98C(){return fn_8002C80C();}
}
#pragma pop
