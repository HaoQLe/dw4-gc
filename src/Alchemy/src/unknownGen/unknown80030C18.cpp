#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_800261F4(void *,short);
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igEventTracker_fieldInit();
void igObject_register();
extern char lbl_8046677C[];
extern char lbl_8046679C[];
extern char lbl_80472A58[];
extern void *lbl_80561BA4;
extern void *lbl_805621F4;
void *igEventTracker_getMeta();
void *igEventTracker_vtableRead();
void fn_80030D50();
void igEventTracker_register();
void *igEventTracker_getMetaCall();
}
struct UnknownGenObject80030CC8 {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 char unknown0C[36];
 int unknown30;
 int unknown34;
 int unknown38;
 int unknown3C;
 int unknown40;
 int unknown44;
 int unknown48;
 int unknown4C;
 int unknown50;
 int unknown54;
 char unknown58[4];
 int unknown5C;
 char unknown60[9424];
};
extern "C" {
void *fn_80030C18(void *object){
 fn_80030D50();
 return fn_8006546C(lbl_80561BA4,object);
}
void *fn_80030C50(){
 if(!lbl_80561BA4) lbl_80561BA4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561BA4;
}
void *igEventTracker_getMeta(){
 if(!lbl_80561BA4 || !(reinterpret_cast<unsigned int *>(lbl_80561BA4)[0x24/4]&4)) fn_80030D50();
 return lbl_80561BA4;
}
void *igEventTracker_vtableRead(){
 UnknownGenObject80030CC8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472A58;
 object.unknown08=0;
 object.unknown30=0;
 object.unknown34=0;
 object.unknown38=0;
 object.unknown3C=0;
 object.unknown40=0;
 object.unknown44=0;
 object.unknown48=0;
 object.unknown4C=0;
 object.unknown50=0;
 object.unknown54=0;
 object.unknown5C=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_800261F4(&object,-1);
 return result;
}
void fn_80030D50(){
 fn_80066188((int)igEventTracker_register);
}
void igEventTracker_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561BA4,(int)igObject_register,(int)fn_800237D0,(int)igEventTracker_getMetaCall,(int)lbl_8046679C,9520,(int)igEventTracker_vtableRead,(int)igEventTracker_fieldInit,0,(int)lbl_8046677C);
}
void *igEventTracker_getMetaCall(){return igEventTracker_getMeta();}
}
#pragma pop
