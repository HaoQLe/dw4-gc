#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80342460();
void fn_803424AC();
void *fn_803425BC();
void fn_803425CC();
void fn_803438F4();
extern char lbl_80455108[];
extern char lbl_80536728[];
void fn_80342528();
void *fn_8034259C();
}
extern "C" {
void fn_80342500(){
 fn_80066188((int)fn_80342528);
}
void fn_80342528(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536728,(int)fn_803438F4,(int)fn_803425BC,(int)fn_8034259C,(int)lbl_80455108,24,(int)fn_803424AC,(int)fn_803425CC,0,0);
}
void *fn_8034259C(){return fn_80342460();}
}
#pragma pop
