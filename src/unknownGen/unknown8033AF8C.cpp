#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80338E68();
void fn_803396C8();
void *fn_8033AD8C();
void fn_8033ADD8();
extern char lbl_80454744[];
extern char lbl_80536228[];
void fn_8033AFB4();
void *fn_8033B020();
}
extern "C" {
void fn_8033AF8C(){
 fn_80066188((int)fn_8033AFB4);
}
void fn_8033AFB4(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536228,(int)fn_803396C8,(int)fn_80338E68,(int)fn_8033B020,(int)lbl_80454744,44,(int)fn_8033ADD8,0,0,0);
}
void *fn_8033B020(){return fn_8033AD8C();}
}
#pragma pop
