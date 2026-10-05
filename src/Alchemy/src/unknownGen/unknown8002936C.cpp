#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80029200();
void fn_8002923C();
void fn_80029434();
void fn_80032D80();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_8046415C[];
extern char lbl_80464168[];
extern void *lbl_80561710;
extern void *lbl_80561D00;
void fn_80029394();
void *fn_8002940C();
void *fn_8002942C();
}
extern "C" {
void fn_8002936C(){
 fn_80066188((int)fn_80029394);
}
void fn_80029394(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561710,(int)fn_80032D80,(int)fn_8002942C,(int)fn_8002940C,(int)lbl_80464168,52,(int)fn_8002923C,(int)fn_80029434,0,(int)lbl_8046415C);
}
void *fn_8002940C(){return fn_80029200();}
void *fn_8002942C(){return lbl_80561D00;}
}
#pragma pop
