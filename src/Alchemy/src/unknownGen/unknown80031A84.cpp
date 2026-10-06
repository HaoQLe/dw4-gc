#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_80031D98();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
extern char lbl_80466DD4[];
extern char lbl_80466DEC[];
extern char lbl_80472C48[];
extern void *lbl_80561C4C;
void *fn_80031ABC();
void *fn_80031AF8();
void fn_80031CD8();
void fn_80031D00();
void *fn_80031D78();
}
struct UnknownGenRoot80031AF8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80031AF8(){fn_8006665C(this);}
};
struct UnknownGenObject80031AF8 : UnknownGenRoot80031AF8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[8];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject80031AF8(){unknown00=lbl_80472C48;}
};
extern "C" {
void *fn_80031A84(void *object){
 fn_80031CD8();
 return fn_8006546C(lbl_80561C4C,object);
}
void *fn_80031ABC(){
 if(!lbl_80561C4C || !(reinterpret_cast<unsigned int *>(lbl_80561C4C)[0x24/4]&4)) fn_80031CD8();
 return lbl_80561C4C;
}
void *fn_80031AF8(){
 UnknownGenObject80031AF8 object;
 object.unknown00=lbl_80472C48;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80031CD8(){
 fn_80066188((int)fn_80031D00);
}
void fn_80031D00(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561C4C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80031D78,(int)lbl_80466DEC,56,(int)fn_80031AF8,(int)fn_80031D98,0,(int)lbl_80466DD4);
}
void *fn_80031D78(){return fn_80031ABC();}
}
#pragma pop
