#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWDegiDataList_getMeta();
void beNDMWDegiDataList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80340B0C();
void igObjectList_register();
extern char lbl_80454F10[];
extern char lbl_804E3998[];
extern char lbl_80536630[];
extern void *lbl_80536634;
void beNDMWDegiDataList_register();
void *beNDMWDegiDataList_getMetaCall();
}
extern "C" {
void fn_803408F4(){
 fn_80066188((int)beNDMWDegiDataList_register);
}
void beNDMWDegiDataList_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536630,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWDegiDataList_getMetaCall,(int)lbl_80454F10,20,(int)beNDMWDegiDataList_vtableRead,0,0,(int)lbl_804E3998);
}
void *beNDMWDegiDataList_getMetaCall(){return beNDMWDegiDataList_getMeta();}
void *fn_803409B0(void *object){
 fn_80340B0C();
 return fn_8006546C(lbl_80536634,object);
}
void *beNDMWDegiData_getMeta(){
 if(!lbl_80536634 || !(reinterpret_cast<unsigned int *>(lbl_80536634)[0x24/4]&4)) fn_80340B0C();
 return lbl_80536634;
}
}
#pragma pop
