#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8010CBD4();
void fn_8010F8E0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80494AF0[];
extern char lbl_80494B04[];
extern char lbl_80497600[];
extern char lbl_8049765C[];
extern char lbl_804976C0[];
extern char lbl_8055F024[8];
extern char lbl_8055F02C[8];
extern void *lbl_805621F4;
extern void *lbl_80563658;
extern void *lbl_8056365C;
void *fn_8010F5C8();
void *fn_8010F604();
void fn_8010F674();
void fn_8010F69C();
void *fn_8010F708();
void *fn_8010F760();
void *fn_8010F79C();
void fn_8010F824();
void fn_8010F84C();
void *fn_8010F8C0();
}
struct UnknownGenObject8010F604_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010F79C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F79C(){fn_8006665C(this);}
};
struct UnknownGenObject8010F79C : UnknownGenRoot8010F79C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8010F79C(){unknown00=lbl_80497600;}
};
extern "C" {
void *fn_8010F58C(){
 if(!lbl_80563658) lbl_80563658=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563658;
}
void *fn_8010F5C8(){
 if(!lbl_80563658 || !(reinterpret_cast<unsigned int *>(lbl_80563658)[0x24/4]&4)) fn_8010F674();
 return lbl_80563658;
}
void *fn_8010F604(){
 UnknownGenObject8010F604_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804976C0;
 object.unknown00=lbl_8049765C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010F674(){
 fn_80066188((int)fn_8010F69C);
}
void fn_8010F69C(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563658,(int)fn_8002907C,(int)fn_80024180,(int)fn_8010F708,(int)lbl_80494AF0,20,(int)fn_8010F604,0,0,(int)lbl_8055F024);
}
void *fn_8010F708(){return fn_8010F5C8();}
void *fn_8010F728(void *object){
 fn_8010F824();
 return fn_8006546C(lbl_8056365C,object);
}
void *fn_8010F760(){
 if(!lbl_8056365C || !(reinterpret_cast<unsigned int *>(lbl_8056365C)[0x24/4]&4)) fn_8010F824();
 return lbl_8056365C;
}
void *fn_8010F79C(){
 UnknownGenObject8010F79C object;
 object.unknown00=lbl_80497600;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010F824(){
 fn_80066188((int)fn_8010F84C);
}
void fn_8010F84C(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056365C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8010F8C0,(int)lbl_80494B04,20,(int)fn_8010F79C,(int)fn_8010F8E0,0,(int)lbl_8055F02C);
}
void *fn_8010F8C0(){return fn_8010F760();}
}
#pragma pop
