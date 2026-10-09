#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_80029724();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igDataList_register();
extern char lbl_8046423C[];
extern char lbl_80472FA0[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern void *lbl_80561730;
void *igNonRefCountedObjectList_getMeta();
void *igNonRefCountedObjectList_vtableRead();
void fn_8002966C();
void igNonRefCountedObjectList_register();
void *igNonRefCountedObjectList_getMetaCall();
}
struct UnknownGenObject80029614_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igNonRefCountedObjectList_getMeta(){
 if(!lbl_80561730 || !(reinterpret_cast<unsigned int *>(lbl_80561730)[0x24/4]&4)) fn_8002966C();
 return lbl_80561730;
}
void *igNonRefCountedObjectList_vtableRead(){
 UnknownGenObject80029614_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002966C(){
 fn_80066188((int)igNonRefCountedObjectList_register);
}
void igNonRefCountedObjectList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561730,(int)igDataList_register,(int)fn_80024D1C,(int)igNonRefCountedObjectList_getMetaCall,(int)lbl_8046423C,20,(int)igNonRefCountedObjectList_vtableRead,(int)fn_80029724,0,0);
}
void *igNonRefCountedObjectList_getMetaCall(){return igNonRefCountedObjectList_getMeta();}
}
#pragma pop
