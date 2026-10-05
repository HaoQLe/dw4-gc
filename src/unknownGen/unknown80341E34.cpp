#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_80341D38();
void fn_80341D84();
void fn_80341EF0();
extern char lbl_804550B8[];
extern char lbl_805366F8[];
void fn_80341E5C();
void *fn_80341ED0();
}
extern "C" {
void fn_80341E34(){
 fn_80066188((int)fn_80341E5C);
}
void fn_80341E5C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805366F8,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_80341ED0,(int)lbl_804550B8,36,(int)fn_80341D84,(int)fn_80341EF0,0,0);
}
void *fn_80341ED0(){return fn_80341D38();}
}
#pragma pop
