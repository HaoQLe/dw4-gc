#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8010F4FC();
void fn_80112DF0();
void fn_80284294();
void fn_80286738();
void *fn_80289930();
extern char lbl_80416C10[];
extern char lbl_80497724[];
extern char lbl_804CB27C[];
extern char lbl_804CBEB4[];
extern void *lbl_80515D1C;
extern void *lbl_805621F4;
void *fn_802865D4();
void *fn_80286620();
void fn_80286674();
void fn_8028669C();
void *fn_80286718();
}
struct UnknownGenObject80286620_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80286560(){return fn_80289930();}
void *fn_80286580(){
 if(!lbl_80515D1C) lbl_80515D1C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515D1C;
}
void *fn_802865D4(){
 if(!lbl_80515D1C || !(reinterpret_cast<unsigned int *>(lbl_80515D1C)[0x24/4]&4)) fn_80286674();
 return lbl_80515D1C;
}
void *fn_80286620(){
 UnknownGenObject80286620_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80497724;
 object.unknown00=lbl_804CBEB4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80286674(){
 fn_80066188((int)fn_8028669C);
}
void fn_8028669C(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515D1C,(int)fn_80112DF0,(int)fn_8010F4FC,(int)fn_80286718,(int)lbl_80416C10,12,(int)fn_80286620,(int)fn_80286738,0,(int)lbl_804CB27C);
}
void *fn_80286718(){return fn_802865D4();}
}
#pragma pop
