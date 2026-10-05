#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8012FC48();
void *fn_8014C238();
void fn_8014C274();
void fn_8014C5EC();
extern char lbl_8049F4B8[];
extern char lbl_8049F4E4[];
extern void *lbl_80564374;
void fn_8014C554();
void *fn_8014C5CC();
}
extern "C" {
void fn_8014C52C(){
 fn_80066188((int)fn_8014C554);
}
void fn_8014C554(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564374,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8014C5CC,(int)lbl_8049F4E4,48,(int)fn_8014C274,(int)fn_8014C5EC,0,(int)lbl_8049F4B8);
}
void *fn_8014C5CC(){return fn_8014C238();}
}
#pragma pop
