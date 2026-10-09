#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_8014C2F4(void *,short);
void fn_8014C52C();
void igInstanceLock_register();
extern char lbl_8049F4A8[];
extern char lbl_804A6460[];
extern char lbl_804A6564[];
extern char lbl_804A6F2C[];
extern char lbl_804A6FA0[];
extern char lbl_804AA8E4[];
extern void *lbl_805641E8;
extern void *lbl_80564370;
extern void *lbl_80564374;
void *igDynamicLock_getMeta();
void *igDynamicLock_vtableRead();
void fn_8014C148();
void igDynamicLock_register();
void *igDynamicLock_getMetaCall();
void *fn_8014C1F8();
}
struct UnknownGenObject8014C0E4_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject8014C274 {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
};
extern "C" {
void *igDynamicLock_getMeta(){
 if(!lbl_80564370 || !(reinterpret_cast<unsigned int *>(lbl_80564370)[0x24/4]&4)) fn_8014C148();
 return lbl_80564370;
}
void *igDynamicLock_vtableRead(){
 UnknownGenObject8014C0E4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA8E4;
 object.unknown00=lbl_804A6564;
 object.unknown00=lbl_804A6F2C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014C148(){
 fn_80066188((int)igDynamicLock_register);
}
void igDynamicLock_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564370,(int)igInstanceLock_register,(int)fn_8014C1F8,(int)igDynamicLock_getMetaCall,(int)lbl_8049F4A8,32,(int)igDynamicLock_vtableRead,0,0,0);
}
void *igDynamicLock_getMetaCall(){return igDynamicLock_getMeta();}
void *fn_8014C1F8(){return lbl_805641E8;}
void *fn_8014C200(void *object){
 fn_8014C52C();
 return fn_8006546C(lbl_80564374,object);
}
void *igDefaultManager_getMeta(){
 if(!lbl_80564374 || !(reinterpret_cast<unsigned int *>(lbl_80564374)[0x24/4]&4)) fn_8014C52C();
 return lbl_80564374;
}
void *igDefaultManager_vtableRead(){
 UnknownGenObject8014C274 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6FA0;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_8014C2F4(&object,-1);
 return result;
}
}
#pragma pop
