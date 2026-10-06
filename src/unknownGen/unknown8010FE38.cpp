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
void fn_80066B08();
void fn_8010CBD4();
void fn_8010FFF4();
extern char lbl_80494C30[];
extern char lbl_804975A4[];
extern char lbl_8055F05C[8];
extern void *lbl_805621F4;
extern void *lbl_8056368C;
void *fn_8010FE74();
void *fn_8010FEB0();
void fn_8010FF38();
void fn_8010FF60();
void *fn_8010FFD4();
}
struct UnknownGenRoot8010FEB0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010FEB0(){fn_8006665C(this);}
};
struct UnknownGenObject8010FEB0 : UnknownGenRoot8010FEB0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject8010FEB0(){unknown00=lbl_804975A4;}
};
extern "C" {
void *fn_8010FE38(){
 if(!lbl_8056368C) lbl_8056368C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056368C;
}
void *fn_8010FE74(){
 if(!lbl_8056368C || !(reinterpret_cast<unsigned int *>(lbl_8056368C)[0x24/4]&4)) fn_8010FF38();
 return lbl_8056368C;
}
void *fn_8010FEB0(){
 UnknownGenObject8010FEB0 object;
 object.unknown00=lbl_804975A4;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010FF38(){
 fn_80066188((int)fn_8010FF60);
}
void fn_8010FF60(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056368C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8010FFD4,(int)lbl_80494C30,20,(int)fn_8010FEB0,(int)fn_8010FFF4,0,(int)lbl_8055F05C);
}
void *fn_8010FFD4(){return fn_8010FE74();}
}
#pragma pop
