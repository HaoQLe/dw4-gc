#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_80335388();
void fn_803353D4();
void fn_80335560();
extern char lbl_80453EFC[];
extern char lbl_80535FFC[];
void fn_803354CC();
void *fn_80335540();
}
extern "C" {
void fn_803354A4(){
 fn_80066188((int)fn_803354CC);
}
void fn_803354CC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FFC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80335540,(int)lbl_80453EFC,20,(int)fn_803353D4,(int)fn_80335560,0,0);
}
void *fn_80335540(){return fn_80335388();}
}
#pragma pop
