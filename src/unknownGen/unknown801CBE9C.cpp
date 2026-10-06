#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801CC1EC();
void *fn_801CFB8C();
void *fn_801CFCA8();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B258C[];
extern char lbl_804B5EC4[];
extern char lbl_804B5F28[];
extern char lbl_805609D0[8];
extern void *lbl_805621F4;
extern void *lbl_805654F0;
extern void *lbl_805654F4;
void *fn_801CBF18();
void *fn_801CBF54();
void fn_801CBFC4();
void fn_801CBFEC();
void *fn_801CC058();
}
struct UnknownGenObject801CBF54_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801CBE9C(){return fn_801CFB8C();}
void *fn_801CBEBC(){return fn_801CFCA8();}
void *fn_801CBEDC(){
 if(!lbl_805654F0) lbl_805654F0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805654F0;
}
void *fn_801CBF18(){
 if(!lbl_805654F0 || !(reinterpret_cast<unsigned int *>(lbl_805654F0)[0x24/4]&4)) fn_801CBFC4();
 return lbl_805654F0;
}
void *fn_801CBF54(){
 UnknownGenObject801CBF54_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B5F28;
 object.unknown00=lbl_804B5EC4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CBFC4(){
 fn_80066188((int)fn_801CBFEC);
}
void fn_801CBFEC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805654F0,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CC058,(int)lbl_804B258C,20,(int)fn_801CBF54,0,0,(int)lbl_805609D0);
}
void *fn_801CC058(){return fn_801CBF18();}
void *fn_801CC078(void *object){
 fn_801CC1EC();
 return fn_8006546C(lbl_805654F4,object);
}
void *fn_801CC0B0(){
 if(!lbl_805654F4 || !(reinterpret_cast<unsigned int *>(lbl_805654F4)[0x24/4]&4)) fn_801CC1EC();
 return lbl_805654F4;
}
}
#pragma pop
