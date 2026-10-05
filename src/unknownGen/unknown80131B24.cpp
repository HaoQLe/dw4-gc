#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8012FC48();
void *fn_80131A20();
void fn_80131A5C();
void fn_80131BE4();
extern char lbl_8049BF1C[];
extern char lbl_8049BF28[];
extern void *lbl_80563B18;
void fn_80131B4C();
void *fn_80131BC4();
}
extern "C" {
void fn_80131B24(){
 fn_80066188((int)fn_80131B4C);
}
void fn_80131B4C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B18,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80131BC4,(int)lbl_8049BF28,24,(int)fn_80131A5C,(int)fn_80131BE4,0,(int)lbl_8049BF1C);
}
void *fn_80131BC4(){return fn_80131A20();}
}
#pragma pop
