#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80284294();
void igMessenger_fieldInit();
void igObject_register();
extern char lbl_804169C8[];
extern char lbl_804CB06C[];
extern char lbl_804CB98C[];
extern void *lbl_80515C7C;
extern void *lbl_805621F4;
void *igMessenger_getMeta();
void *igMessenger_vtableRead();
void fn_8028494C();
void igMessenger_register();
void *igMessenger_getMetaCall();
}
struct UnknownGenRoot802848C0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802848C0(){fn_8006665C(this);}
};
struct UnknownGenObject802848C0 : UnknownGenRoot802848C0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject802848C0(){unknown00=lbl_804CB98C;}
};
extern "C" {
void *fn_80284820(){
 if(!lbl_80515C7C) lbl_80515C7C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515C7C;
}
void *igMessenger_getMeta(){
 if(!lbl_80515C7C || !(reinterpret_cast<unsigned int *>(lbl_80515C7C)[0x24/4]&4)) fn_8028494C();
 return lbl_80515C7C;
}
void *igMessenger_vtableRead(){
 UnknownGenObject802848C0 object;
 object.unknown00=lbl_804CB98C;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8028494C(){
 fn_80066188((int)igMessenger_register);
}
void igMessenger_register(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515C7C,(int)igObject_register,(int)fn_800237D0,(int)igMessenger_getMetaCall,(int)lbl_804169C8,12,(int)igMessenger_vtableRead,(int)igMessenger_fieldInit,0,(int)lbl_804CB06C);
}
void *igMessenger_getMetaCall(){return igMessenger_getMeta();}
}
#pragma pop
