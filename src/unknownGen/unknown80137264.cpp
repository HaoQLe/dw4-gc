#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8012FC48();
void *fn_80137160();
void fn_8013719C();
void fn_80137324();
extern char lbl_8049CCFC[];
extern char lbl_8049CD08[];
extern void *lbl_80563D1C;
void fn_8013728C();
void *fn_80137304();
}
extern "C" {
void fn_80137264(){
 fn_80066188((int)fn_8013728C);
}
void fn_8013728C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D1C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80137304,(int)lbl_8049CD08,24,(int)fn_8013719C,(int)fn_80137324,0,(int)lbl_8049CCFC);
}
void *fn_80137304(){return fn_80137160();}
}
#pragma pop
