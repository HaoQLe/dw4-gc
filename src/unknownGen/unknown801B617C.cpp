#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B5D38();
void fn_801B5D74();
void fn_801B6244();
void fn_801C8C48();
extern char lbl_804ADA5C[];
extern char lbl_804ADA7C[];
extern void *lbl_80564B3C;
extern void *lbl_80565378;
void fn_801B61A4();
void *fn_801B621C();
void *fn_801B623C();
}
extern "C" {
void fn_801B617C(){
 fn_80066188((int)fn_801B61A4);
}
void fn_801B61A4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564B3C,(int)fn_801C8C48,(int)fn_801B623C,(int)fn_801B621C,(int)lbl_804ADA7C,112,(int)fn_801B5D74,(int)fn_801B6244,0,(int)lbl_804ADA5C);
}
void *fn_801B621C(){return fn_801B5D38();}
void *fn_801B623C(){return lbl_80565378;}
}
#pragma pop
