#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_801305C4();
void fn_801452B0();
void fn_80177F30();
extern char lbl_8049E6FC[];
extern char lbl_804A9954[];
extern char lbl_804A99B0[];
extern char lbl_804AAD84[];
extern void *lbl_805621F4;
extern void *lbl_80563ABC;
extern void *lbl_8056414C;
void *fn_8014515C();
void *fn_80145198();
void fn_801451F0();
void fn_80145218();
void *fn_80145288();
void *fn_801452A8();
}
struct UnknownGenObject80145198 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_80145100(){return fn_80177F30();}
void *fn_80145120(){
 if(!lbl_8056414C) lbl_8056414C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056414C;
}
void *fn_8014515C(){
 if(!lbl_8056414C || !(reinterpret_cast<unsigned int *>(lbl_8056414C)[0x24/4]&4)) fn_801451F0();
 return lbl_8056414C;
}
void *fn_80145198(){
 UnknownGenObject80145198 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804AAD84;
 object.unknown00=lbl_804A99B0;
 object.unknown00=lbl_804A9954;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801451F0(){
 fn_80066188((int)fn_80145218);
}
void fn_80145218(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056414C,(int)fn_801305C4,(int)fn_801452A8,(int)fn_80145288,(int)lbl_8049E6FC,20,(int)fn_80145198,(int)fn_801452B0,0,0);
}
void *fn_80145288(){return fn_8014515C();}
void *fn_801452A8(){return lbl_80563ABC;}
}
#pragma pop
