#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80023FDC();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igContext_fieldInit();
void igNonRefCountedObjectList_register();
void igObject_register();
extern char lbl_804676E4[];
extern char lbl_804676F4[];
extern char lbl_80467704[];
extern char lbl_80467710[];
extern char lbl_80472FA0[];
extern char lbl_8047410C[];
extern char lbl_80474170[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_8055D658[8];
extern void *lbl_80561DF8;
extern void *lbl_80561DFC;
extern void *lbl_80561E00;
void *igContextExt_getMeta();
void fn_800374E8();
void igContextExt_register();
void *igContextExt_getMetaCall();
void *fn_80037594();
void *igContextList_getMeta();
void *igContextList_vtableRead();
void fn_80037680();
void igContextList_register();
void *igContextList_getMetaCall();
void *igContext_getMeta();
void fn_80037770();
void igContext_register();
void *igContext_getMetaCall();
}
struct UnknownGenObject80037610_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igContextExt_getMeta(){
 if(!lbl_80561DF8 || !(reinterpret_cast<unsigned int *>(lbl_80561DF8)[0x24/4]&4)) fn_800374E8();
 return lbl_80561DF8;
}
void fn_800374E8(){
 fn_80066188((int)igContextExt_register);
}
void igContextExt_register(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_80561DF8,(int)igContext_register,(int)fn_80037594,(int)igContextExt_getMetaCall,(int)lbl_804676E4,20,0,0,0,0);
}
void *igContextExt_getMetaCall(){return igContextExt_getMeta();}
void *fn_80037594(){return lbl_80561E00;}
void *fn_8003759C(void *object){
 fn_80037680();
 return fn_8006546C(lbl_80561DFC,object);
}
void *igContextList_getMeta(){
 if(!lbl_80561DFC || !(reinterpret_cast<unsigned int *>(lbl_80561DFC)[0x24/4]&4)) fn_80037680();
 return lbl_80561DFC;
}
void *igContextList_vtableRead(){
 UnknownGenObject80037610_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_80474170;
 object.unknown00=lbl_8047410C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80037680(){
 fn_80066188((int)igContextList_register);
}
void igContextList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561DFC,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igContextList_getMetaCall,(int)lbl_804676F4,20,(int)igContextList_vtableRead,0,0,(int)lbl_8055D658);
}
void *igContextList_getMetaCall(){return igContextList_getMeta();}
void *igContext_getMeta(){
 if(!lbl_80561E00 || !(reinterpret_cast<unsigned int *>(lbl_80561E00)[0x24/4]&4)) fn_80037770();
 return lbl_80561E00;
}
void fn_80037770(){
 fn_80066188((int)igContext_register);
}
void igContext_register(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_80561E00,(int)igObject_register,(int)fn_800237D0,(int)igContext_getMetaCall,(int)lbl_80467710,20,0,(int)igContext_fieldInit,0,(int)lbl_80467704);
}
void *igContext_getMetaCall(){return igContext_getMeta();}
}
#pragma pop
