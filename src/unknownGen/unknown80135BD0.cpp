#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void *fn_80135A64();
void fn_80135AA0();
void fn_80135C8C();
void fn_8013B97C();
extern char lbl_8049C948[];
extern char lbl_8055F614[8];
extern void *lbl_80563CA0;
void fn_80135BF8();
void *fn_80135C6C();
}
extern "C" {
void fn_80135BD0(){
 fn_80066188((int)fn_80135BF8);
}
void fn_80135BF8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563CA0,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80135C6C,(int)lbl_8049C948,48,(int)fn_80135AA0,(int)fn_80135C8C,0,(int)lbl_8055F614);
}
void *fn_80135C6C(){return fn_80135A64();}
}
#pragma pop
