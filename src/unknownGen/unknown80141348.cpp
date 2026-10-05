#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80135250();
void *fn_801411DC();
void fn_80141218();
void fn_80141408();
void fn_8015207C();
extern char lbl_8049C458[];
extern char lbl_8049E0C0[];
extern void *lbl_8056402C;
void fn_80141370();
void *fn_801413E8();
}
extern "C" {
void fn_80141348(){
 fn_80066188((int)fn_80141370);
}
void fn_80141370(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056402C,(int)fn_8015207C,(int)fn_80135250,(int)fn_801413E8,(int)lbl_8049C458,44,(int)fn_80141218,(int)fn_80141408,0,(int)lbl_8049E0C0);
}
void *fn_801413E8(){return fn_801411DC();}
}
#pragma pop
