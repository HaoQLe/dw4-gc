#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void *fn_8014EB5C();
void fn_8014EB98();
void fn_8014ED80();
extern char lbl_8049FC88[];
extern void *lbl_8056447C;
void fn_8014ECF0();
void *fn_8014ED60();
}
extern "C" {
void fn_8014ECC8(){
 fn_80066188((int)fn_8014ECF0);
}
void fn_8014ECF0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056447C,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8014ED60,(int)lbl_8049FC88,48,(int)fn_8014EB98,(int)fn_8014ED80,0,0);
}
void *fn_8014ED60(){return fn_8014EB5C();}
}
#pragma pop
