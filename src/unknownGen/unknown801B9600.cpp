#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801B98D8();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AE850[];
extern char lbl_804B7D14[];
extern char lbl_804B7D78[];
extern char lbl_80560460[8];
extern void *lbl_805621F4;
extern void *lbl_80564CEC;
extern void *lbl_80564CF0;
void *fn_801B963C();
void *fn_801B9678();
void fn_801B96E8();
void fn_801B9710();
void *fn_801B977C();
}
struct UnknownGenObject801B9678 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801B9600(){
 if(!lbl_80564CEC) lbl_80564CEC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564CEC;
}
void *fn_801B963C(){
 if(!lbl_80564CEC || !(reinterpret_cast<unsigned int *>(lbl_80564CEC)[0x24/4]&4)) fn_801B96E8();
 return lbl_80564CEC;
}
void *fn_801B9678(){
 UnknownGenObject801B9678 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7D78;
 object.unknown00=lbl_804B7D14;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B96E8(){
 fn_80066188((int)fn_801B9710);
}
void fn_801B9710(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564CEC,(int)fn_8002907C,(int)fn_80024180,(int)fn_801B977C,(int)lbl_804AE850,20,(int)fn_801B9678,0,0,(int)lbl_80560460);
}
void *fn_801B977C(){return fn_801B963C();}
void *fn_801B979C(){
 if(!lbl_80564CF0 || !(reinterpret_cast<unsigned int *>(lbl_80564CF0)[0x24/4]&4)) fn_801B98D8();
 return lbl_80564CF0;
}
}
#pragma pop
