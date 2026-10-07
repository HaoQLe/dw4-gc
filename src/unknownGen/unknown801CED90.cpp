#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801C1F0C();
void *fn_801C1F84();
void *fn_801C20DC();
extern char lbl_804B2CD0[];
extern char lbl_804B313C[];
extern char lbl_804B4DAC[];
extern void *lbl_80564FA4;
extern void *lbl_805655F4;
void *fn_801CEDCC();
void fn_801CEE18();
void fn_801CEE40();
void *fn_801CEEB0();
void *fn_801CEEB8();
}
struct UnknownGenObject801CEDCC_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_801CED90(){
 if(!lbl_805655F4 || !(reinterpret_cast<unsigned int *>(lbl_805655F4)[0x24/4]&4)) fn_801CEE18();
 return lbl_805655F4;
}
void *fn_801CEDCC(){
 UnknownGenObject801CEDCC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B4DAC;
 object.unknown00=lbl_804B313C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CEE18(){
 fn_80066188((int)fn_801CEE40);
}
void fn_801CEE40(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805655F4,(int)fn_801C1F0C,(int)fn_801CEEB0,(int)fn_801C20DC,(int)lbl_804B2CD0,40,(int)fn_801CEDCC,(int)fn_801CEEB8,0,0);
}
void *fn_801CEEB0(){return lbl_80564FA4;}
void *fn_801CEEB8(){
 void *value0=lbl_805655F4;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+64)=(void *)fn_801C1F84;
 return value0;
}
}
#pragma pop
