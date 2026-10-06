#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8010EE6C();
void fn_8010F21C();
void fn_80402E28();
void fn_804099E8();
extern char lbl_80462CBC[];
extern char lbl_80496040[];
extern char lbl_804F1118[];
extern void *lbl_8055CB6C;
extern void *lbl_805621F4;
void *fn_80409844();
void *fn_80409890();
void fn_8040992C();
void fn_80409954();
void *fn_804099C8();
}
struct UnknownGenRoot80409890 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80409890(){fn_8006665C(this);}
};
struct UnknownGenObject80409890_0 : UnknownGenRoot80409890 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80409890_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject80409890 : UnknownGenObject80409890_0 {
 char unknown0C[4];
 inline ~UnknownGenObject80409890(){unknown00=lbl_804F1118;}
};
extern "C" {
void *fn_804097F0(){
 if(!lbl_8055CB6C) lbl_8055CB6C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8055CB6C;
}
void *fn_80409844(){
 if(!lbl_8055CB6C || !(reinterpret_cast<unsigned int *>(lbl_8055CB6C)[0x24/4]&4)) fn_8040992C();
 return lbl_8055CB6C;
}
void *fn_80409890(){
 UnknownGenObject80409890 object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_804F1118;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8040992C(){
 fn_80066188((int)fn_80409954);
}
void fn_80409954(){
 fn_80402E28();
 fn_80066204(0,(int)&lbl_8055CB6C,(int)fn_8010F21C,(int)fn_8010EE6C,(int)fn_804099C8,(int)lbl_80462CBC,16,(int)fn_80409890,(int)fn_804099E8,0,0);
}
void *fn_804099C8(){return fn_80409844();}
}
#pragma pop
