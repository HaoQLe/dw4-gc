#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802CCE38();
void fn_803250AC();
void fn_803386E8();
void *fn_80339654();
extern char lbl_804545AC[];
extern char lbl_805361B8[];
void fn_803396C8();
void *fn_80339730();
}
extern "C" {
void fn_803396A0(){
 fn_80066188((int)fn_803396C8);
}
void fn_803396C8(){
 fn_803250AC();
 fn_80066204(1,(int)lbl_805361B8,(int)fn_802CCE38,(int)fn_803386E8,(int)fn_80339730,(int)lbl_804545AC,44,0,0,0,0);
}
void *fn_80339730(){return fn_80339654();}
}
#pragma pop
